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

#endif /* MAIN_H */
