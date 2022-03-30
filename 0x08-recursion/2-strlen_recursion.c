#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: pointer to the string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
