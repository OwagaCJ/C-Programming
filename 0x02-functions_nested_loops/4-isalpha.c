#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 * @c: character to be checked
 * Return: 1
 * 0 for otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
