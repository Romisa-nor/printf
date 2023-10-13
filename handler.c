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
		case 's':
			char_count += handlerString(c, args);
			break;
		case 'd':
		case 'i':
			char_count += handlerDigit(c, args);
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

/**
  * handlerString - handle the identifer of strings
  * @c: the indentifer.
  * @args: argument.
  *
  * Return: char counts.
  */
int handlerString(char c, va_list args)
{
	int char_count = 0;

	switch (c)
	{
		case 'c':
			char_count += putchar(va_arg(args, int));
			break;
		case 's':
		{
			const char *str = va_arg(args, const char *);

			while (*str)
			{
				char_count += putchar(*str);
				str++;
			}
		}
			break;
	}
	return (char_count);
}

/**
  * handlerDigit - handle the identifer of digits
  * @c: the indentifer.
  * @args: argument.
  *
  * Return: char counts.
  */
int handlerDigit(char c, va_list args)
{
	int char_count = 0;
	char buffer[12], *str;

	switch (c)
	{
		case 'd':
		case 'i':
		{
			int num = va_arg(args, int);

			if (num < 0)
			{
				char_count += putchar('-');
				num = -num;
			}
			sprintf(buffer, "%d", num);
			str = buffer;
			while (*str)
			{
				char_count += putchar(*str);
				str++;
			}
		}
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
