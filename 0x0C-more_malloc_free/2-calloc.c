#include "main.h"
#include <stdlib.h>

/**
  * _memset - copies char to memory area
  * @s: pointer location
  * @b: character to be copied
  * @n: no. of times to be copied
  */
void _memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements in array
  * @size: size in bytes of each element
  * Return: pointer to memory for array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
