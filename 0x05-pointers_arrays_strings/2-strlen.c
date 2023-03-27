#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 * _strlen: return the length of a string
 * @s:String
 * Return:length
 */

int _strlen(char *s)
{
	int n = 0;/* Contador de caracteres */

	while (*s != '\0')
	{
		n = n + 1;
		s = s + 1; /* La direccion de s aumenta en 1 */
	}
	return (n); /* Retorna el valor final de n */
}
