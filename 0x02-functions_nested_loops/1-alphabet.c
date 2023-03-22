#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 * Return: Nothing (void)
 */

void print_alphabet(void)
{
	char lowerCaseLetter;

	for (lowerCaseLetter = 'a'; lowerCaseLetter <= 'z'; lowerCaseLetter++)
		_putchar(lowerCaseLetter);
	_putchar('\n');
}
