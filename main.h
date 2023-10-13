#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int handler(char c, va_list args);
int handlerString(char c, va_list args);
int handlerDigit(char c, va_list args);
