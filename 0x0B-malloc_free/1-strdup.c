#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the ayyay containing values
 * Return: elements contained in str
 */

char *_strdup(char *str)
{
	int len = 0;
	char *duplica;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplica = (char *)malloc(sizeof(char) * len);

	if (duplica == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		duplica[i] = str[i];
	}
	return (duplica);
}
