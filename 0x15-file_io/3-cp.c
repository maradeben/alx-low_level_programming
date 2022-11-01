#include "main.h"

/**
  * printerror - print errors
  * @message: error message
  * @filename: file causing error
  * @exit_value: exit status
  * Return: no return
  */
void printerror(char *message, char *filename, int exit_value)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, filename);
	exit(exit_value);
}


/**
 * main - copy one<F11> file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0;<F11>
 */
int main(int ac, char **av)
{
	int fd, fd_dest, read_file, check;
	char buffer[1024];
	/* define file permissions */
	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* confirm number of arguments */
	if (ac != 3)
		printerror("Usage: cp file_from file_to", "", 97);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		printerror("Error: Can't read from file", av[1], 98);

	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
	if (fd_dest == -1)
		printerror("Error: Can't write to", av[2], 99);

	read_file = check = 1;
	while (read_file)
	{
		read_file = read(fd, buffer, BUFFERSIZE);
		if (read_file == -1)
			printerror("Error: Can't read from file", av[1], 98);
		if (read_file > 0)
		{
			check = write(fd_dest, buffer, read_file);
			if (check == -1)
				printerror("Error: Can't write to", av[2], 99);
		}
	}

	check = close(fd); /*close file*/
	if (check == -1)
		printerror("Error: Can't close fd", fd, 100);

	check = close(fd_dest);
	if (check == -1)
		printerror("Error: Can't close fd", fd_dest, 100);
	return (0);
}
