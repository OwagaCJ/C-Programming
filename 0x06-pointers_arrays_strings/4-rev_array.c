#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @a: parameter 1
 * @n: number of elements
 * Return: 1
 */

void reverse_array(int *a, int n)
{
	int ch;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		ch = a[i];
		a[n - 1 - i] = a[i];
		a[n - 1 - i] = ch;
	}
	return (1);
}
