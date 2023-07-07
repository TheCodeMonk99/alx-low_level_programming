#include <stdio.h>
#include "main.h"

/**
  * main - prints the name of the program
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	printf("%s\n", argv[0]);
	return (0);
}
