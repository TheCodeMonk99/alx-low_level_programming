#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * list_len - returns no. of elements in list
  * @h: pointer variable
  *
  * Return: number of elements in list
  */
size_t list_len(const list_t *h)
{
	size_t ecount = 0;

	while (h)
	{
		ecount++;
		h = h->next;
	}
	return (ecount);
}
