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
n = rand() - (RAND_MAX / 2);
r = n % 10;

if (r > 5)
{
	printf("the last digit is %d and is greater than 5\n", r);
}
else if (r < 6 && r != 0)
{
	printf("last digit is %d and is less than 6 and not equal to 0\n", r);
}
else
{
	printf("%d is equal to zero\n", r);
}

return (0);
}
