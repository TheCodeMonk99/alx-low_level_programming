#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees list_t
  * @head: pointer to head
  * Return: Nothing
  */
void free_list(const list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp
	}
}
