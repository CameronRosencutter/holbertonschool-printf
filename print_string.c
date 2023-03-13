#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
* print_string - writes the character c to stdout
* @s: the string we need to print out.
*
* Return: 1.
*/

int print_string(va_list s)

{
	char *string;
	int i = 0;

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
