#include "../main.h"

int main() {
    int chars_printed = _printf("This is a character: %c, a string: %s, and a percent sign: %%\n", 'A', "Hello, World");
    _printf("\nTotal characters printed: %d\n", chars_printed);
    return 0;
}
