#include <stdio>
#include "main.h"
/**
 * swap_int - funtion swaos the value of two integers
 * @a: integer one
 * @b: integer two
 * Return Always 0
 */
int main(void)
{
	int a = 5, b = 10;
	printf("Before Swap a = %d b = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n After swap a = %d b = %d", a, b);
	return (0);
}

