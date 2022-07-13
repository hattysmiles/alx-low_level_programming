#include "main.h"
/**
 * puts2 - function prints every other character of a string
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	int A, a, b;
	char temp;

	A = 0;
	while (A >= 0)
	{
		if (str[A] == '\0')
			break;
		A++;
	}
	for (a = 0; a < (A - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = temp;
		}
	}
}
