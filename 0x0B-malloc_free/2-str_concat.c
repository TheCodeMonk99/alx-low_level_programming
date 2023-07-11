#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatanates 2 s1 & s2
  * @s1: first string
  * @s2: second string
  * Return: poninter to new string
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, i;
	char *p;

	a = b = c = i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s22 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
		return (NULL);
	for (; c < a; c++)
		p[c] = s1[c];
	for (i = 0; c < (a + b); c++)
		p[c] = s2[i];
	p[c] = '\0';
	return (p);
}
