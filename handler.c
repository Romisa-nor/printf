#include "main.h"

/**
  * handler - handler the identifer and replace them.
  * @c: the identifer.
  * @args: the arugments
  *
  * Return: char counts.
  */
int handler(char c, va_list args)
{
	int char_count = 0;

	switch (c)
	{
		case 'c':
			char_count += printChar(args);
			break;
		case 's':
			char_count += printString(args);
			break;
		case 'd':
		case 'i':
			char_count += printDigit(args);
			break;
		case 'b':
			char_count += toBinary(args);
			break;
		case '%':
			char_count += putchar('%');
			break;
		default:
			char_count += putchar('%');
			char_count += putchar(c);
	}
	return (char_count);
}
