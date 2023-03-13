# Synopsis

This is simply the printf function used to print and display the desired content.

This project was created by both Cameron Rosencutter(*6160@holbertonstudents.com*) and Eve Baker(*6100@holbertonstudents.com*) for Holberton School.

# Description

The printf() function sends a formatted string to the standard output (the display). Below are convertion specifiers used...

+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.

# Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory

+ Prototype: int _printf(const char *format, ...);
+ Returns: the number of characters printed (excluding the null byte used to end output to strings)
+ write output to stdout, the standard output stream
+ format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers: c, s, %.

1. Education is when you read the fine print. Experience is what you get if you don't

+ Handle the following conversion specifiers: d, i.

2. Just because it's in print doesn't mean it's the gospel

+ Create a man page for your function.

# Compile

All .c files were compiled with gcc. The specific conversion we used was  *gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c*.
