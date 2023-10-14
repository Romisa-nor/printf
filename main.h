#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handler(char c, va_list args);
int printString(va_list args);
int printDigit(va_list args);
int printChar(va_list args);
int toBinary(va_list args);
int printUnsignDigit(va_list args);

int get_size(const char *format, int *i);

#endif /* MAIN_H */
