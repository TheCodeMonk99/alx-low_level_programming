#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to duplicate string
  * @str: string to duplicate
  * Return: pointer to new copy of str
  */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *p;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	return (p);
}
