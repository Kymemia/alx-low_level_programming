#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads & prints a text
 * @filename: pointer to be checked
 * @letters: characters to be checked
 * Return: if filename is NULL, return 0,
 * else return text file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t to_read;
	ssize_t to_write;
	ssize_t f_output = 0;
	char buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	while ((to_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if ((size_t)(f_output + to_read) > letters)
		{
			to_read = letters - f_output;
		}
		to_write = write(STDOUT_FILENO, buffer, to_read);
		if (to_write != to_read)
		{
			close(fd);
			return (-1);
		}
		f_output += to_write;
		if ((size_t)(f_output) >= letters)
		{
			break;
		}
	}
	if (to_read == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (f_output);
}
