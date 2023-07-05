#include "main.h"
/**
  * _puts_recusrion - prints string
  * @s: pointer variable
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
	{ _putchar(10);
	}
}
