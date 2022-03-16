#include "main.h"

/**
 * main - print _putchar followed by new line
 * Return: 0 (Success)
 */

int main(void)

{

	char s[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(s[8]);
		++i;
	}


	_putchar('\n');

	return (0);
}
