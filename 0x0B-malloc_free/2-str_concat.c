#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenate two strings
 * @s1: string to be concatenated
 * @s2: stringto be concatenated
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *s1s2;
	int len1 = 0;
	int len2 = 0;
	int totalsize;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	totalsize = len1 + len2 + 1;

	s1s2 = (char *)malloc(sizeof(char) * totalsize);
	if (s1s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s1s2[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s1s2[len1 + i] = s2[i];
	}
	s1s2[len1 + len2] = '\0';
	return (s1s2);
}
