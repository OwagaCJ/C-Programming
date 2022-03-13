#include <stdio.h>
/**
 *main - print lowercase alphabets in lowercase
 *Description; use the putchar function
 *Return: Always 0 (Success)
 */

int main(void)

{

	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);

}
