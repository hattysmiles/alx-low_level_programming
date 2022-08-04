#include "3-calc.h"

/**
 * op_add - addition operator
 * @p: Parameter 1
 * @q: Parameter 2
 *
 * Return: Return the result of the operation
 */
int op_add(int p, int q)
{
	return (p + q);
}
/**
 * op_sub - function subtraction
 * @p: first int
 * @q: second int
 * Return: difference of 2 numbers
 */
int op_sub(int p, int q)
{
	return (p - q);
}

/**
 * op_mul - product of 2 numbers
 * @p: first int
 * @q: second int
 * Return: product of the numbers
 */
int op_mul(int p, int q)
{
	return (p * q);
}

/**
 * op_div - division of 2 numbers
 * @p: first int
 * @q: second int
 * Return: result of the division of the numbers
 */
int op_div(int p, int q)
{
	return (p / q);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @p: first int
 * @q: second int
 * Return: remainder of division of the numbers
 */
int op_mod(int p, int q)
{
	return (p % q);
}
