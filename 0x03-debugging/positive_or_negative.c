#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - test positive or negative value
* @n: value tested
* Return: 0
*/

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
