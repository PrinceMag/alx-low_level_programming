#include <stdio.h>

/**
 * main - number of arguments
 * @argc: - total number of arguments
 * @argv: - pointer to array of pointer
 *
 * Return: 0 ALways 0 success
 */

int main(int argc, char *argv[])
{
	while (argc --)
	{
		printf("%d \n", *argv[argc]);
	}

	return (0);
}
