#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
* print-string - writes the character c to stdout
* @s: the string we need to print out.
*
* Return: 1.
*/

int print_string(va_list s)
/* the print_string function is used as a helper function by the larger _printf function to handle the %s format specifier for printing strings to the console or other output devices. */
{
	char *string;
	int 1 = 0;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(null)";
	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
