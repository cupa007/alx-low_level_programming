#include <stdio.h>
#include <stdlib>
#include <time.h>
/**
 * main-prgram entry point.
 * Return:0-no error, non zero value if error.
 */
int main(void)
{
	int n;
	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
