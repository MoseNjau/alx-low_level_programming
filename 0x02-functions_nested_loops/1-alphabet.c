#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lowercase using putchar only once
 *
 *
 *Return: Always zero
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
