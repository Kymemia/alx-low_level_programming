#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: pointer to be checked
 * @text_content: char to be checked
 * Return: -1 if failure, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t rr;

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		rr = write(fd, text_content, strlen(text_content));
		if (rr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
