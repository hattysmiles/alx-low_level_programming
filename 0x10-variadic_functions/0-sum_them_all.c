#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry Point
 * @b: variadic inputs
 * Return: sum
 */
int sum_them_all(const unsigned int b, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (b == 0)
		return (0);

	va_start(valist, b);

	for (i = 0; i < b; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
	va_end(valist);

	return (sum);
}
