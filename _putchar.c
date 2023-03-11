#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: the char to print
*
* Return: on success 1.
* On error, -1 is returned and error is set appropiately
*/

int _putchar(char c)
/* the _putchar function is used to write single characters to the console or other output devices. It is commonly used in C programming for printing output one character at a time, such as in a loop or when processing a string character by character. */
{
	return (write(1, &c, 1));
}
