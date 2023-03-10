#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);
int print_int(va_list i);
int print_dec(va_list d);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int print_bin(va_list b);


/**
 * @sc: specifier
 * @f: function
 */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
