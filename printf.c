#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: the format to print the output.
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			char_count += handler(*format, args);
		}
		else
		{
			char_count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
