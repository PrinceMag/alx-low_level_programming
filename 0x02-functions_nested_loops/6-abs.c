#include "main.h"

/**
 * _abs - Absolute value of number
 *@integer: integer input
 * Description: absolute valus of number
 *
 * Return: Always 0 (Sucess)
 */

int _abs(int integer)
{
	return (integer * ((integer > 0) - (integer < 0)));
}
