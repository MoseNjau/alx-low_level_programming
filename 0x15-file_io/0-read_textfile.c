#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lengthr, lenw;
	char *mybuffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	mybuffer = malloc(sizeof(char) * letters);
	if (mybuffer == NULL)
	{
		close(fd);
		return (0);
	}
	lengthr = read(fd, mybuffer, letters);
	close(fd);
	if (lengthr == -1)
	{
		free(mybuffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, mybuffer, lengthr);
	free(mybuffer);
	if (lengthr != lenw)
		return (0);
	return (lenw);
}