#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - prints no of coins
  * to return when given cents
  * @argc: argument count
  * @argv: array of arguments
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int n, coins, money, size;
	int n = 0;
	int coin_array[] = {25, 10,  5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]); /*Converting argv[2] to money*/

	if (money < 0)/*money not +ve*/
	{
		printf("0\n");
		return (0);
	}
	else if (money >= 0)

	{
		coins = 0;
		for (size = 0; size < 5; size++)
		{
			while (money >= coin_array[n])
			{
				++coins;
				money -= coin_array[n];
			}
			n++
		}
		printf("%d", coins);
	}
	return (0);
}
