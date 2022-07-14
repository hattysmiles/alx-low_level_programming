#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to convert
 *
 * Return: char
 */
char *string_toupper(char*str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 97) && (str[count] <= 122))
			*(str + count) -= 32;
		count++;
	}
	return (str);
}
