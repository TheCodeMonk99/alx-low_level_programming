#include "main.h"

/**
  * _islower - checks if char is lowercase
  * @c: char to be checked
  * Return: return 1 if lowercase, else 0
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
