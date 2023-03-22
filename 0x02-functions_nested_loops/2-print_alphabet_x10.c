#include "main.h"

/**
 * print_alphabet_x10 - print 1 times the alphabet
 * Description: print the alphabet 10 times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char counter;
	char lowerCaseLetter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (lowerCaseLetter = 'a'; lowerCaseLetter <= 'z'; lowerCaseLetter++)
			_putchar(lowerCaseLetter);
		_putchar('\n');
	}
}
