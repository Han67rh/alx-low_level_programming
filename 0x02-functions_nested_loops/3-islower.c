#include "main.h"
/**
 * _islower - checks if a letter is lowercase or not
 * @c: is the character to be checked
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
