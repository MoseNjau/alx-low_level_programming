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
	int first, last;

	for (first = 48; first < 57; first++)
		for (last = (first + 1); last <= 57; last++)
		{
			putchar(first);
			putchar(last);
			if (first + last != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}

