#include "main.h"
#include <stdio.h>
/**
 * _puts - print string followed by new line
 * @str: string to be printed
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
