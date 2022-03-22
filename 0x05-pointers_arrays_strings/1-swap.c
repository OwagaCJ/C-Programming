#include "main.h"

/**
 * swap_int - swapping the values of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;

	*b = *a;

	*a = c;

}
