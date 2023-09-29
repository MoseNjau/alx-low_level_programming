#include "main.h"
/**
 *_strcmp - Compares two strings
 *@s1: First string
 *@s2: Second string
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (*(s1 + a) && *(s2 + a) && (*(s1 + a) == *(s2 + a)))
	a++;
	return (*(s1 + a) - *(s2 + a));
}
