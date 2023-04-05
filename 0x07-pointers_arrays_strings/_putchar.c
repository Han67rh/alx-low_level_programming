#include <unistd.h>

/**
 * _putchar -writes a character c to stdout
 *
 * @c: Will be printed
 *
 * Return: Success 1.
 * on error, return -1, and error is corrected.
 */
int _puchar(char c)

{
	return (write(1,&c,1));
}
