#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main- program that adds positive numbers
 * @argc: count for the arguments
 * @argv: the argument passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int b, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			c = argv[a];

			for (b = 0; b < strlen(c); b++)
			{
				if (c[b] < 48 || c[b] > 57)
				{
					printf("Error\n");
					return (1);
				}

			}
			sum = sum + atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
