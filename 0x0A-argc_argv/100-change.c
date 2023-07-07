#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - prints no of coins
  * to return when given cents
  * @argc: argument count
  * @argv: array of arguments
  * Return: 0 (Success), 1 (Error)
  */

int main(int argc, char *argv[])
{
	int n, coins, money;
	int n = 0;
	int coin_array[] = {25, 10,  5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]); /*Converting argv[2] to money*/
	coins = 0;
	if (money < 0)/*money not +ve*/
	{
		printf("0\n");
		return (0);
	}
	else if (money >= 0)
	{
		for (n = 0; size < 5; n++)
		{
			while (money >= coin_array[n])
			{
				++coins;
				money -= coin_array[n];
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
