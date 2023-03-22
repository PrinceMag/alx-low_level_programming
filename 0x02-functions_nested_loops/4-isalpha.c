#include "main.h"

/**
 * _isalpha - find letters
 * @c: single input
 *
 * Description - find letters
 *
 * Return: 1 for letters or 0
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
