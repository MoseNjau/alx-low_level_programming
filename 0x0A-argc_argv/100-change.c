#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the result of manipulation
 * @argc: The counts of command line arguments
 * @argv: An array of command line arguments
 * Return: 0 if successful, 1 for errors
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 5;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{printf("0\n");
		return (0);
	}
	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
		printf("%d\n", count);
	}
	return (0);
}
