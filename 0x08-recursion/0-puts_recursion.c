#include "main.h"

/**
 * _puts_recursion - print string followed by new line
 * @s: pointer to string to be reversed
 * Return: reversed string
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
