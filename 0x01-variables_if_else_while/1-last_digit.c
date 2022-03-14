#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assign a random number to n
 *
 * Description: get the last digit
 *
 * Return: Always 0 (Success)
 */


int main(void)

{

	int n, last_digit;


	srand(time(0));

	n = rand() - RAND_MAX / 2;


	last_digit = n % 10;


	if (last_digit > 5)

	{
		printf("Last digit of is greater than 5\n");
	}

	else if (last_digit == 0)

	{
		printf("last digit is of zero\n");
	}

	else if (last_digit < 6)

	{
		printf("last digit is less than 6 but not equal to 0\n");
	}

	return (0);

}
