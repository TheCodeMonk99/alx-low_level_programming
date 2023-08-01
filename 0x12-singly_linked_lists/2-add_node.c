#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * add_node - adds a node with new str
  * @head: node in list
  * @str: string in element
  *
  * Return: address of new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnd;
	unsigned int ln = 0;

	while (str[ln])
		ln++;

	newnd = malloc(sizeof(list_t));

	if (!newnd)
		return (NULL);

	newnd->str = strdup(str);
	newnd->len = ln;
	newnd->next = (*head);
	(*head) = newnd;

	return (*head);
}
