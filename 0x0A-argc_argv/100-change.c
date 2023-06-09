#include <stdio.h>
#include <stdlib.h>

int coin_changer(int amt);

/**
 * main - Prints minimum number of coins to make change for input amount.
 *
 * @argc: Number of commandline arguments.
 * @argv: Array of commandline arguments.
 *
 * Return: 0 if successful, 1 if issues encountered.
 */

int main(int argc, char **argv)
{
	int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	num = coin_changer(atoi(*(argv + 1)));

	printf("%d\n", num);

	return (0);
}

/**
 * coin_changer - Converts amount to least number of 25, 10, 5, 2, and 1 cents.
 *
 * @amt: Amount of money to be converted.
 *
 * Return: Minimum number of coins to be given as change.
 */

int coin_changer(int amt)
{
	int i = 0;

	i += amt / 25;
	amt %= 25;

	i += amt / 10;
	amt %= 10;

	i += amt / 5;
	amt %= 5;

	i += amt / 2;
	amt %= 2;

	i += amt;
	return (i);
}
