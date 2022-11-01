#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: to write into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wd, len;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);
	wd = write(filename, text_content, len);
	if (wd == -1)
		return (-1);

	close(fd);
	return (1);
}


/**
 * _strlen - strlen analog
 * @s: the string to get length
 * Return: total length of string
 */

int _strlen(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}
