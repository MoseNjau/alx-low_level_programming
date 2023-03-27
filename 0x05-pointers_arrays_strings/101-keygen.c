#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int m, n, i, s;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[58];

	srand(time(NULL));
	while (s != 2772)
	{
		m = i = s = 0;
		while ((2772 - 122) > s)
		{
			n = rand() % 62;
			a[m] = c[n];
			s += c[n];
			m++;
		}
		while (c[i])
		{
			if (c[i] == (2772 - s))
			{
				a[m] = c[i];
				s += c[i];
				m++;
				break;
			}
			i++;
		}
	}
	a[m] = '\0';
	printf("%s", a);
	return (0);
}
