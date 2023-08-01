#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * add_node_end - adds node to end of list
  * @head: pointer to pointer
  * @str: new string to be duplicated
  * Return: Address of new element, NULL if
  *		failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;
	unsigned int len = 0;

	temp = *head;

	while (str[len])
		len++;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	if (temp->next != (NULL))
		temp = temp->next;
	if (temp->next == NULL)
	{
		end->str = strdup(str);
		end->len = len;
		end->next = NULL;
		temp->next = end;
	}
	return (end);
}
