#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text to file
 * @filename: pointer to be checked
 * @text_content: char to be checked
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content && write(fd, text_content, strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
