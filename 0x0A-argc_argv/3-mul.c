#include <stdio.h>
#include "main.h"

/**
  * _atoi - converts string to int
  * @s: string value
  * Return: return integer
  */
int _atoi(char *s)
{
	int i, res, sign;

	i = 0;
	res = 0;
	sign = 1;
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (sign * res);
}

/**
  * main - multiplies two numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: product of 2 nums
  */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
