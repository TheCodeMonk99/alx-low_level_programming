#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatanates s2 to s1 up to n
  * @s1: first string
  * @s2: second string
  * @n: number of bytes
  * Return: concatanted pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, i;
	char *ptr;

	a = b = c = i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (n >= b)
		n = b;
	ptr = malloc((sizeof(char)) * (a + n));
	if (ptr == NULL)
		return (NULL);
	/*Filling ptr with characters of s1*/
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0' && i < (a + n))
	{
		ptr[i] = s2[c];
		c++;
		i++;
	}
	return (ptr);
}
