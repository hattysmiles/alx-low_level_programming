#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: string
 * Return: nothing
 */
void puts2(char *s)
{
	int A, a, b;
	char temp;

	A = 0;
	while (A >= 0)
	{
		if (s[A] == '\0')
			break;
		A++;
	}
	for (a = 0; a < (A - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(s + b);
			*(s + b) = *(s + (b - 1));
			*(s + (b - 1)) = temp;
		}
	}
}
