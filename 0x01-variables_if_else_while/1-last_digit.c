#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int last_digi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digi = n % 10;
	if (last_digi > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digi);
	else if (last_digi == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_digi);
	}
	else if (last_digi != 0 && last_digi < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digi);
	}
	return (0);
}
