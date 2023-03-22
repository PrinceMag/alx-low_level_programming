#include "main.h"

/**
 * _islower - checks for lower case letters
 * @c: single letter input
 *
 * Description: Checks for lowercase letters
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

