#include <stdio.h>
/**
  *main - entry point
  *prints numbers 0-9
  *Return: always 0 (success)
  */

int main(void)
{
	int i = 0;	
	
	do
	{
	printf("%d", i);
	++i;
	} while (i < 10);
	putchar(10);
	return (0);
}
