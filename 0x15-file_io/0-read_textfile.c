#include "main.h"

/**
*read_textfile - function reads and prints to stdoutput
*@filename: file to read
*@letters: the number of letter for reading
*Return: actual number of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t fd, writ, rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	file = malloc(sizeof(char) * letters);

	rd = read(fd, file, letters);
	writ = write(STDOUT_FILENO, file, rd);
	free(file);
	close(fd);
	return (writ);

}
