#include "stdio.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char exampleWhile = "example";

	while (exampleWhile)
	{
		_putchar(exampleWhile);
		exampleWhile++;
	}
	_putchar('\n');

	return (0);
}
