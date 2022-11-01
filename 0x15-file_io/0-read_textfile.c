#include "main.h"

/**
 * read_textfile - write to POSIX stdio
 * @filename: text file to read
 * @letters: no. of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}

	rd = read(fd, buff, letters);
	if (rd < 0)
	{
		free(buff);
		close(fd);
		return (0);
	}

	wd = write(STDOUT_FILENO, buff, letters);
	if (wd < 0)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (wd);
}
