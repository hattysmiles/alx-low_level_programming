#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: input value
 * @n: input value
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int temp;

	for (c = 0; c < n--; c++)
	{
		temp = a[c];
		a[c] = a[n];
		a[n] = temp;
	}
}
