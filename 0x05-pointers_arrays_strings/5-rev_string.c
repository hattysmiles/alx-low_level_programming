#include "main"
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
	for (i = 0; i < (l - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = temp;
		}
	}		
}
