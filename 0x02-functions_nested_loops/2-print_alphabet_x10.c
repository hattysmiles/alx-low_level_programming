#include "main.h"
/**
 * print_alphabet_x10.c - print 1o times the alphabet in lower
 * Return: Always return 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'Z')
		{
			_putchar(ch);
			ch++;
		}
			_putchar('\n');
			i++;
	}
}	
	