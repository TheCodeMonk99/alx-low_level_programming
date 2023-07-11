#include "main.h"
#include <stdlib.h>
/**
  * create_array - create array of size size and assign char c
  * @size: size of array
  * @c: char to assign
  * Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	p = malloc(size of(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
