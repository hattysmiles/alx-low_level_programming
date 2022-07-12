#include "main.h"

/**
 * _puts - functions that print a string follwed by a new line
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
