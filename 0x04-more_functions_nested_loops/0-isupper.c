#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character tested
 * Return: 0
 */
int _isupper(int c)
{
	if (c >=  'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
