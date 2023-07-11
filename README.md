
## Welcome
This is a standard rebuild of the `printf` function in C which required the capability of printing with the `%i`, `%d`, `%c`, `%s`, and `%%` specifiers to standard output. `printf` returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.

Below are some specifiers that printf supports, their use, and the type
of argument required to be paired with them.

%s - A string of characters. - char *

%c - A single character. - char

%d - A signed decimal integer - int

%i - A signed decimal integer - int

%% - Prints a single character
