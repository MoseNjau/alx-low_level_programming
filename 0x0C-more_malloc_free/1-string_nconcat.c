#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes of  s2
 * Return: conactenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int len = 0;
	unsigned int i;

	while (s1[len] != '\0')
	{
		len++;
	}

	combined = (char *)malloc(len + n + 1);
	if (combined == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		combined[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		combined[len + i] = s2[i];
	}
	combined[len + n] = '\0';

	if (combined == NULL)
		combined = "";
	return (combined);
}
