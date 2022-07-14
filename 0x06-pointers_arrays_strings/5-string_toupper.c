#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'b' && n[a] <= 'd')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}
