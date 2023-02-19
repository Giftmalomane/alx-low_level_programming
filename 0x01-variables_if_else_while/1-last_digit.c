#include <stdio.h>
#include <time.h>
#include  <stdlib.h>

/**
 * main - entry point
 * description: checks the last digit of assigned interger.
 * Return: Always 0 (success)
 */
int main(void)
{
int n, r;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n % 10 < 6 && r != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
}

return (0);
}
