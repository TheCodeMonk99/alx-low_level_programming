#include <stdio.h>

/**
  *main - entry point
  *prints alphabet in reverse
  *Return: always 0 (success)
  */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}
