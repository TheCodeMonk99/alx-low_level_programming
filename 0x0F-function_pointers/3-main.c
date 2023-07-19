#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * main - entry point
  * @argc: argument count
  * @argv: argument array
  *
  *Return: Always 0
  */
int main(int __attribute__((__unsused__)) argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d", get_op_func(op)(a, b));
	return (0);
}
