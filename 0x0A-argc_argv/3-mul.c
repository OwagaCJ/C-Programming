#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: argument passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, mul = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = a * b;

		printf("product = %d\n", mul);
	}
	return (0);
}
