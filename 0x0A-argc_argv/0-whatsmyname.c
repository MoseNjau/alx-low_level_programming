#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argc; // To avoid unused variable warning for argc

    printf("%s\n", argv[0]);

    return (0);
}
