#ifndef MAIN_H
#define MAIN_H

/* Headers */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/* Prototypes */

int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap);
int print_unsigned_int(unsigned int n);

/* STRUCTS */
/**
 * struct print - printf type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

#endif /* MAIN_H */
