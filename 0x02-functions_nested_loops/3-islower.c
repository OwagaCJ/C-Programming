#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: an input character
 *  Return: 1 if lowecase or 0 if uppercase
 */

int _islower(int c)

{
	char lower = 'a';

	int i = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == c)
			i = 1;
	}

	return (i);

}
