#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of a given no.
 * Return: none
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < sqrt(612852475143); i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
