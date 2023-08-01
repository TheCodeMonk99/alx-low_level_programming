#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * print_list - prints all the elements of a list
  * @h: pointer variable to struct
  *
  * Return: number of nodes in list
  */

size_t print_list(const list_t *h)
{
	size_t ncount = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);

		}
		h = h->next;
		ncount++;
	}
	return (ncount);
}
