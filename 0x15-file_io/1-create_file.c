#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of file to be created
 * @text_content: pointer to the content to be written into the file
 * Return: 1(success), -1(fail)
*/

int create_file(const char *filename, char *text_content)
{
	/*declare variables*/
	int fd;
	size_t len;
	ssize_t bytesW;

	if (filename == NULL) /*verify if filename is empty*/
	{
		return (-1);
	}
	/*open file, write and truncate existing file or create*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	{
		if (fd == -1)
		return (-1);
	}
	/*set rw user permissions to file*/
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		perror("chmod"); /*print error message on failure*/
		return (-1);
	}
	if (text_content != NULL) /*verify text_content isn't empty*/
	{
		len = strlen(text_content); /*get length of text_content*/
		bytesW = write(fd, text_content, len); /*write string to file*/

		if (bytesW != (ssize_t)len) /*if bytesW exceeds len*/
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
