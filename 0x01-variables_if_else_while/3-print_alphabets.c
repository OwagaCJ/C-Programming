#include <stdio.h>

/**
 * main - print alphabets in lowercase then in uppercase
 * use the putchaer function
 * Return: 0 (Success)
 */

int main(void)

{

	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	putchar ('\n');

	return (0);
}
