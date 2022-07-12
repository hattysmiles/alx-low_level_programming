#include "main.h"
#include <stdio.h>
/**
 *  swap_int - function swaps the values of two integers
 *@a: integer one
 *@b: integer two
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
{
	int a = 5, b=10;
	printf("Before swap a=%d b=%d", a,b);
	a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swap a=%d b=%d", a,b);
    return(0);
}
