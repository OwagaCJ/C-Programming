#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: initialized character
 * Return:Null if size is 0 else return pointer
 */
char *create_array(unsigned int size, char c)
{
		char *a;
		unsigned int i;

		if (size == 0)
			return (NULL);

		a = malloc(size * sizeof(*a));

		if (a == NULL)
			return (NULL);

		for (i = 0; i < size; i++)

			a[i] = c;

		return (a);
}
