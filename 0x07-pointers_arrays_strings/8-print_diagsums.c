#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to 2D array
 * @size: size x size of the square matrix
 * 
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int p;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (p = 0; p < s; p += size + 1)
	{
		tl += a[p];
	}

	for (p = size - 1; p < s - 1; p += size - 1)
	{
		tr += a[p];
	}

	printf("%d, %d\n", tl, tr);
}
	

