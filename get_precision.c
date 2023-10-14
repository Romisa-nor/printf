#include "main.h"

/**
 * get_precision - Calculates the precision for printing function .
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int cur_i = *i + 1;  
	int precision = -1;

	if (format[cur_i] != '.')
		return (precision);

	/*
	 * The function then iterates through the characters in the format string starting from curr_i + 1. 
	 * It checks each character to determine if it's a digit (0-9) or an asterisk ('*').
	 */


	precision = 0;

	for (cur_i += 1; format[cur_i] != '\0'; cur_i++)
	{
		if (is_digit(format[cur_i]))
		{
			precision *= 10;
			precision += format[cur_i] - '0';
		}
		else if (format[cur_i] == '*')
		{
			cur_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = cur_i - 1;

	return (precision);
}
