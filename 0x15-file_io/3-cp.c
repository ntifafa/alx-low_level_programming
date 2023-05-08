#include "main.h"

/**
 * closingTime - terminates file descriptors
 * @fdFrom: input file descriptor
 * @fdTo: destination file descritor
 * Return: nothing
*/

void closingTime(int fdFrom, int fdTo)
{
	if (close(fdFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(100);
	}
	if (close(fdTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdTo);
		exit(100);
	}
}


/**
 * main - entry point
 * Description: copies the content of a file to another
 * @argc: number of arguments passed
 * @argv: pointer to arguments passed
 * Return: 0(success)
*/
int main(int argc, char *argv[])
{
	int fdFrom, fdTo; /*declare file descriptors*/
	char buff[1024];
	ssize_t bytesR, bytesW;

	if (argc != 3) /*if number of arguments exceeds 2, print error*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdFrom = open(argv[1], O_RDONLY); /*open input file with read-only perm*/
	if (fdFrom == -1) /*if file opening fails*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n", argv[1]);
		exit(98);
	}
	/*open, write and truncate output file or create with specified perms*/
	fdTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fdTo == -1) /*if opening fails*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to");
		exit(99);
	}
	while ((bytesR = read(fdFrom, buff, 1024)) > 0)
	{
		bytesW = write(fdTo, buff, bytesR);
		if ((bytesW != bytesR) || (bytesW != bytesR))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytesR == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closingTime(fdFrom, fdTo);
	return (0);
}
