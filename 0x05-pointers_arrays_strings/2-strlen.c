#include "main.h"
/**
 * _strlen - function returns the length of the string
 * @s: string
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length)
}

