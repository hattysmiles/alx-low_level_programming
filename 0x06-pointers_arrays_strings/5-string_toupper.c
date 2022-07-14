#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to convert
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int ln;
	int i;

	ln = 0;
	for (i = 0; i < ln; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (char)(str[i] - 32);
		i++;
	}
	return (str);
}
