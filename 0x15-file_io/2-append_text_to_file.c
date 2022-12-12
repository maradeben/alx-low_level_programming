#include "main.h"

/**
 * append_text_to_file - as name
 * @filename: to append to
 * @text_content: to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ad, len;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);
	ad = write(fd, text_content, len);
	if (ad == -1)
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
		return (1 + _strlen(++s));
}
