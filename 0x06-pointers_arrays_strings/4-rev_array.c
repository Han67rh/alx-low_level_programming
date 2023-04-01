#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int g;

	for (m = 0; m < n--; m++)
	{
		g = a[m];
		a[m] = a[n];
		a[n] = g;
	}
}
