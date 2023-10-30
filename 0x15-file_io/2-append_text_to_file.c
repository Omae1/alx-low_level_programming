#include "main.h"

/**
*append_text_to_file - append text at the end of file
*@filename: pointer to a file name
*@text_content: pointer to a string
*Return: -1 if fails otherwise 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int oP, writ, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[length]; length++)
			;
	}
	oP = open(filename, O_WRONLY | O_APPEND);
	writ = write(oP, text_content, length);
	if (oP == -1 || writ == -1)
		return (-1);
	close(oP);
	return (1);
}
