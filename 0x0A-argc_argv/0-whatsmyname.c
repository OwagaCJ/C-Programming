#include "main.h"
#include <stdio.h>

/**
 * main - prints name followed by new line
 * @argc: gives the number of arguments
 * @argv: the string given as command
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("program name = %s\n", *argv);

	return (0);
}
