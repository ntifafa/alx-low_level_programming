#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to string to be added to the end of the file
 * Return: 1(success), -1(fail)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	/*declare file pointer*/
	FILE *fP;

	if (filename == NULL) /*verify if filename is empty*/
	{
		return (-1);
	}
	if (text_content == NULL) /*if there's no string to add*/
	{
		return (1);
	}
	/*open file and append through file pointer*/
	fP = fopen(filename, "a");
	if (fP == NULL) /*if fP is empty; unsuccessful opening*/
	{
		return (-1);
	}
	/*append string to end of file*/
	fprintf(fP, "%s", text_content);
	fclose(fP);
	return (1);
}

