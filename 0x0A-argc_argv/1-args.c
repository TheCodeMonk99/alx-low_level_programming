#include <stdio.h>
#include "main.h"

/**
  * main - prints number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 (Sucess)
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
