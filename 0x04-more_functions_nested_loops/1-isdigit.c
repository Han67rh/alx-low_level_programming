#include "main.h"
#include <stdio.h>
/**
 * _isdigit - tells if a digit is a number or not
 * @c: the digit being checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
