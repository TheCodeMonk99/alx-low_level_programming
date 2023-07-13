#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block
  * using malloc and free
  * @ptr: pointer in question
  * @old_size: old size in bytes
  * @new_size: new size in bytes
  * Return: pointer with new size
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);
	return (ptr1);
}
