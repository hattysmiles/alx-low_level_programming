#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (size < 1 || array == NULL || cmp == NULL)
	{
		return (-1);
	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
