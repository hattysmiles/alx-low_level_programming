#include "main.h"

/**
 *  swap_int - function swaps the values of two integers
 *@a: integer one
 *@b: integer two
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
{
    int temporal;

	temporal = *a;

	*a = *b;
	*b = temporal;
    return(0);
}
