#include "main.h"
/**
 * _isalpha - check if a character is a letter
 * @c: is the character to be checked
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'));
}
