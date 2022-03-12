#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print positive or negative
 * Determine : write code for the random number
 * Return: Always 0 (Success)
 */


int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("The number n is : %d\n", n);


	if (n > 0)
	{
		printf("The number is greater than o\n");
	}

	else if (n == 0)
	{
		printf("The number is equal to 0\n");
	}


	else
	{
		printf("The number is less than o");
	}

	return (0);


}
