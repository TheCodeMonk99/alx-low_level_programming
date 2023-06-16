#include <stdio.h>

/**
  *main - entry point
  *print alphabet characters except e and q
  *Return: always 0 (success)
  */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
