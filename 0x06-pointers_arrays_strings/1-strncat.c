#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: num of bytes
 *
 * Return: Appended string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[i] = src[m];
	i++;
	m++;
	}
	dest[i] = '\0';
	return (dest);
}

