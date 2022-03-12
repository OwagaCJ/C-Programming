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

		printf("Last digit is greater than 5\n");

	else if (last_digit == 0)

		printf("last digit is zero\n");

	else if (last_digit < 6 && last_digit != 0)

		printf("last digit is less than 6 and not equal to zero");

	return (0);

}
