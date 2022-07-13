#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: string
 * Return: 0 success
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[600];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}	
}
