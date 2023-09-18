#include "main.h"
/**
 * _isalpha - Che character.
 * @c: tyter
 * Return: 1 if leherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
