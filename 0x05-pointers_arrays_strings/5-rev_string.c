#include "main.h"

/**
  * rev_string - reverses string
  * @s: string to be reversed
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	char lib = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		*counter--;
		lib = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
