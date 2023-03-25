#include <stdio.h>
/**
 * main - prints some fib numbers
 * Return: 0
 */
int main(void)
{
	int time;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (time = 0; time < 50; time++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);


		fib1 = fib2;
		fib2 = sum;


		if (time == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}


