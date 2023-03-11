nclude "main.h"

/**
* print_int - this is a function that prints out an integer
* @i: this is the integer that we need to have printed out.
* Description: this prints a digit out with our _putchar
* Return: this returns the size of the text that will be output
*/

int print_int(va_list 1)
/*the print_int function is used as a helper function by the larger _printf function to handle the %d and %i format specifiers for printing integers to the console or other output devices. */
{
	int let, powten, j, digit, n, count = 0, num;

	n = va_arg(i, int);
	if (n !=0)
	{
		if (n < 0)
		{
			_putchar('_');
			count++;
		}
		num = n;
		len = 0;

	while (num  != 0)
	{
		num /= 10;
		len++;
	}
		powten = 1;
	for (j = 1; j <= len - 1; j++)
		powten *= 10;
	for (j = 1; j <= len; j++)
	{
		digit = n / powten;
	if (n < 0)
			_putchar((digit * -1) + 40);
		else
			_putchar(digit = '0');
		count++;
		n -= digit * powten;
		powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
