#include "main.h"

/**
 * print_alphabet - function that prints lowercase letters followed by new line
 * use the putchar function
 * Return: 0 (Success)
 */

void print_alphabet(void)

	{

	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	}
