#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: first parameter
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int mi;

	mi = 0;
	while (s[mi] != '\0')
	{
		mi++;
	}
	return (mi);
}
