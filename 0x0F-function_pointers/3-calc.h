#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 * @op: operator
 * @f: function
 */
typedef struct op
{
	char *op;
	int (*f)(int p, int q);
}op_t;

int op_add(int p, int q);
int op_sub(int p, int q);
int op_mul(int p, int q);
int op_div(int p, int q);
int op_mod(int p, int q);
int (*get_op_func(char *s))(int, int);
#endif
