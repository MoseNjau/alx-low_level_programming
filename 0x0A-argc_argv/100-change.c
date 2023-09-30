#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number in the command line arguments
 * @argv: An array of the command line arguments
 * Return: 0 if successful, 1 for errors
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 5;
	int count = 0;

	for (int i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
