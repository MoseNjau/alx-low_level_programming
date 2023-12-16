#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s)
{
	int r, p, i, m;

	r = i = 0;
	m = 1;
	while ((*(s + r) < '0' || *(s + r) > '9') && (*(s + r) != '\0'))
	{
		if (*(s + r) == '-')
			m *= -1;
		r++;
	}
	p = r;
	while ((*(s + p) >= '0') && (*(s + p) <= '9'))
	{
		i = i * 10 + m * (*(s + p) - '0');
		p++;
	}
	return (i);
}
