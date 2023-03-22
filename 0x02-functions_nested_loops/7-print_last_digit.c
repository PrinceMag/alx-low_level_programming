#include "main.h"

/**
 * print_last_digit - prints the last digit of number
 * @number: integer input
 *
 * Return: value of last digit
 */

int print_last_digit(int number)
{
	int lastDigit;

	lastDigit = (number % 10);

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}
