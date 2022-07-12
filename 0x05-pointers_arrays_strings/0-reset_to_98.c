#include <Stdio>
/**
 * main - functions that takes a pointer to int
 * Return: Always zero
 */
int main(void)
{
	int n;
	int *n;
	n = 402;
	*n = &n;
	printf("n=%d\n",n);
	*n = 98;
	printf("n=%d\n",n);
	return (0);
}	
