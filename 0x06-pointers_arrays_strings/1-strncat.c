#include "main.h"

/**
  * _strncat - concatanated 2 strings to n bytes
  * @dest: first string
  * @src: string to append
  * @n: number of bytes
  *
  * Return: Appended string dest
  */

char *_strncat(char *dest, char *src, int n);
{
	int i, m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[i] = src[m];
		m++;
		i++;
	}
	if (m < n)
		dest[i] = '\0';
	return (dest);
}
