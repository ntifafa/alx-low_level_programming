#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX standard output
 * @filename: text file being read
 * @letters: the number of letters to read
 * Return: the actual number of letters read and printed,
 * 0 if filename is NULL or cannot be opened
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesR, bytesW;

	if (filename == NULL) /*verify if filename is empty*/
	{
		return (0);
	}
	fd = open(filename, O_RDONLY); /*open filename passed*/
	if (fd == -1)
	{
		return (0);
	}
	/*allocate memory for read data and assign to buffer*/
	buffer = (char *) malloc(letters * sizeof(char));
	/*close file descriptor when there's nothing to be read*/
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/*read letters bytes from file into buffer and assign to bytesR*/
	bytesR = read(fd, buffer, letters);
	if (bytesR == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/*output read contents to standard output and assign to bytesW*/
	bytesW = write(STDOUT_FILENO, buffer, bytesR);
	if (bytesW != bytesR || bytesW == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytesW);
}
