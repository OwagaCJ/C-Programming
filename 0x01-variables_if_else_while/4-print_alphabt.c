#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print the alphabets in lower case
 * use the putchar function
 * Return: Always 0 (success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		if (ch == 'q' || ch == 'e')
		{
			continue;
		}

		else
		{
			putchar(ch);
		}

	 putchar('n\');

return (0);


}
