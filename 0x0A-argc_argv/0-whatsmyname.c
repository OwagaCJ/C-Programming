#include "main.h"
#include <stdio.h>

/**
 * main - prints name followed by new line
 * @argc: gives the number of arguments
 * @argv: the string given as command
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("program name = %s\n", argv[i]);
	}
	return (0);
}
