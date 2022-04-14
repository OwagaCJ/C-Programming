#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print the sum of all its parameters
 * @separator: string to be printed btn numbers
 * @n: number of parameters
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;

	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
