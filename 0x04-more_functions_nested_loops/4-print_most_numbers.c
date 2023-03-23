#include "main.h"
/**
 * print_most_numbers - function
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n == 2 && n == 4)
			continue;
		_putchar(n);
		n++;
	}
	_putchar(10);
}
