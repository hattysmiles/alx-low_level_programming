#include "main.h"
#include <Stdio>

void reset_to_98(int *);

/**
 * main - functions that takes a pointer to int
 * Return: Always zero
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n",n);
	reset_to_98(&n);
	printf("n=%d\n",n);
	return (0);
}	
