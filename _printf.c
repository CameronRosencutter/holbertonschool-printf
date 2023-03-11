#include <stdarg.h>
#include <unisted.h>
#include "main.hh"

/*
* find_function - this is a function that finds the format for _printf
* it also calls for the corresponding function.
* @format: the format that it uses (char, string, int, decimal)
* Return: NULL or the function associated
*/

int (*find_function(const char *format))(va_list)
/* this code is used to find the appropriate function to call based on a format code string. */
{
	unsigned int i = 0;
	code_f find_f[] =
	{
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}
	};

		while (findf[i].sc)
		{
			if (find_f[i].sc[0] == (*format))
				return (find_f[i].f);
			i++;
		}
		return (NULL);
}

/**
* _printf - this is a function that produces output according to the format that we give it
* @format - the format that it uses (char, string, int, and decimal
* Return: the size that the text will be output
*/

int _printf(const char *format, ....)
/*the _printf function is used to print formatted output to the console or other output devices in a flexible and extensible manner, allowing for a variety of formatting options and output formats. */
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, cprint = 0;

	if (format == NULL)
		return (-1);
	va_start(ap,format);

	while (format[i])
	{

		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			cprint++;
			i++
		}

		if (format[i] == '\0')
			return (cprint);
		f = find_function(&format[i + 1]);

		if (f != NULL)
		{
			cprint += f(ap)
			i += 2;
			continue;
		}

		if (!format[i + 1])
			return (-1)
		_putchar(format[i]);
		cprint++;

		if (format[i + i] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (cprint);
}
