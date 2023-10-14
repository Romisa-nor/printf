#include "main.h"

/**
  * printString - handle the identifer of strings
  * @args: argument.
  *
  * Return: char counts.
  */
int printString(va_list args)
{
	int char_count = 0;
	const char *str = va_arg(args, const char *);

	while (*str)
	{
		char_count += putchar(*str);
		str++;
	}
	return (char_count);
}

/**
  * printChar - handle the identifer of strings
  * @args: argument.
  *
  * Return: char counts.
  */
int printChar(va_list args)
{
	int char_count = 0;

	char_count += putchar(va_arg(args, int));
	return (char_count);
}

/**
  * printDigit - handle the identifer of digits
  * @args: argument.
  *
  * Return: char counts.
  */
int printDigit(va_list args)
{
	int char_count = 0;
	char buffer[12], *str;
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
	return (char_count);
}

/**
  * toBinary - convert from decimal to binary.
  * @args: arguments.
  *
  * Return: char count.
  */
int toBinary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char binary[32];
	int index = 0, char_count = 0;

	while (num > 0)
	{
		binary[index++] = (num % 2) + '0';
		num /= 2;
	}
	if (index == 0)
	{
		binary[index++] = '0';
	}
	while (index > 0)
	{
		char_count += putchar(binary[--index]);
	}
	return (char_count);
}
