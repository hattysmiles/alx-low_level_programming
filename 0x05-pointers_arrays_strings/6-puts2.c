#include "main.h"
/**
 * puts2 - function that prints every other character
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	int a, b;	
	a = 0;
	b = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	while (b < a)
	{
		_putchar(str[b]);
		b += 4;
	}
	_putchar('\n');
}
