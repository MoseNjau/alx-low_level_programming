#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Assigns random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mi;

	for (mi = 'a'; mi <= 'z'; mi++)
		if (mi != 'q' && mi != 'e')
			putchar(mi);
	putchar('\n');
	return (0);
}

