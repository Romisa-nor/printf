#include "main.h"
#include <stdbool.h>

// Function to check if a character is a digit
bool is_digit(char c) {
    return c >= '0' && c <= '9';
}

/**
 * get_precision - Calculates the precision for printing.
 * @format: Formatted string in which to print the arguments
 * @i: Pointer to the current position in the format string.
 * @list: List of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list) {
    int curr_i = *i + 1;
    int precision = -1;

    // Check if the next character is a '.'
    if (format[curr_i] != '.') {
        return precision; // No precision specified
    }

    precision = 0;
    curr_i++; // Move to the next character after '.'

    while (is_digit(format[curr_i])) {
        precision *= 10;
        precision += format[curr_i] - '0';
        curr_i++;
    }

    *i = curr_i - 1; // Update the position pointer

    return precision;
}
