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
n = (RAND_MAX / 2) - rand();
r = n % 10;

if (r > 5)
{
	printf("Liast digit of %d is %d and is greater than 5\n", n, r);
}
else if (r < 6 && r != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, r);
}

return (0);
}
