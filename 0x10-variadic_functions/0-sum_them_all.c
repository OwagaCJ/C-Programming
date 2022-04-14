#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - print the sum of all its parameters
 * @n: number of parameters
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list args;

	unsigned int i = 0;


	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));

			if (i != n - 1  && separator != NULL)

				printf("%s", separator);

			i++;
		}
		va_end(args);
	}
	printf("\n");
}
