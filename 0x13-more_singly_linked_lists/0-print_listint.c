#include "lists.h"
/**
  * print_listint - prints all elements of a listint_t list
  * @h: node
  *
  * Return: number of nodes in list
  */
size_t print_listint(const listint_t *h)
{
	int node_c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_c++;
	}
	return (node_c);
}
