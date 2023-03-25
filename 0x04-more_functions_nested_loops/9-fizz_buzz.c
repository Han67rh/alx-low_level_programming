#include <stdio.h>

/**
 * main - prints the fizz buzz test
 * Return: 0
 */
int main(void)
{
	int no = 1;

	for (; no <= 100; no++)
	{
		if (no % 3 == 0 && !(no % 5 == 0))
			printf(" Fizz");
		else if (no % 5 == 0 && !(no % 3 == 0))
			printf(" Buzz");
		else if (no % 5 == 0 && no % 3 == 0)
			printf(" FizzBuzz");
		else if (no == 1)
			printf("%d", no);
		else
			printf(" %d", no);
	}
	printf("\n");
	return (0);
}
