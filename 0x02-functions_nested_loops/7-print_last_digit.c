#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: last digit of the number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{

	int i = n % 10;

	if (i <= 0)
	{
	_putchar(48 + n);
	return ((n));
	}

	else
	{
	_putchar(48 + (-1 * n));
	return ((-1 * n));
	}

}
