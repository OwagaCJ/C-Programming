#include <stdio.h>

/**
 * print_alphabet - function that prints lowercase letters followed by new line
 * use the putchar function
 * Return: 0 (Success)
 */

void print_alphabet(void)

	{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	}
