#include "main.h"
/**
  * string_toupper - changes string
  * to upper
  * @n: pointer
  * Return: string in uppercase
  */
char *string_toupper(char *n)
{
	int i, delta;

	delta = 'A' - 'a';
	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] + delta;
		i++;
	}
	return (n);
}
