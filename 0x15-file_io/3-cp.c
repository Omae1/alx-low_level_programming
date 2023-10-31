#include "main.h"
#include <stdio.h>

char *create_bffer(char *fle);
void close_fle(int fd);
/**
*create_bffer - allocates 1024 bytes
*@fle: stores file buffer name
*Return: new allocated buffer
*/
char *create_bffer(char *fle)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fle);
		exit(99);
	}
	return (buff);
}

/**
*close_fle -where decriptor is closed
*@fd: descriptor
*/
void close_fle(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't close fd %d\n", fd);
		exit(100);
	}


}

/**
*main - function cpies content to another file
*@argc: arguments supplied
*@argv: pointer array to arguments
*Return: Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int f, t, writ, rd;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cpfile_from file_to\n");
		exit(97);
	}
	buff = create_bffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	rd = read(f, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			close(f);
			close(t);
			exit(98);
		}
		writ = write(t, buff, rd);
		if (t == -1 || writ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			close_fle(f);
			close(t);
			exit(99);
		}
		rd = read(f, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	close_fle(f);
	close_fle(t);
	return (0);

}
