#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string for which to calculate the length
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	length = 1 + _strlen_recursion(s + 1);
	return (length);
}
