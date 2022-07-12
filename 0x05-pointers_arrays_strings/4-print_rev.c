#include "main.h"
/**
 * print_rev - functions that print a string in reverse
 * @s: string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	for (index = index - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
