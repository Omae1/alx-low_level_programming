#include "main.h"

/**
*create_file - function creates a file
*@filename: pointer to a filename
*@text_content: pointer to a string
*Return: 1 if successful otherwise -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, writ, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[length]; length++)
			;

	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(fd, text_content, length);
	if (fd == -1 || writ == -1)
		return (-1);
	close(fd);
	return (1);
}
