#include <unistd.h>
/**
 * _putchar - write character c to you
 * @c: the character
 * Return: 1 on success and -1 otherwise
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
