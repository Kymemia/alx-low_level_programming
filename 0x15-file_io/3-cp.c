#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
/**
 * copy_file - copies content of a file to another file
 * @src: pointer to be checked
 * @dest: pointer to be checked
 */
void copy_file(const char *src, const char *dest)
{
	int ofd;
	ssize_t rr;
	int tfd;
	char buff[1024];

	ofd = open(src, O_RDONLY);
	if (ofd == -1)
	{
		fprintf(stderr, "Error: Can't read from source file (%s)\n", strerror(errno));
		exit(98);
	}
	tfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tfd == -1)
	{
		fprintf(stderr, "Error: Can't write to destination file (%s)\n", strerror(errno));
		close(ofd);
		exit(99);
	}
	while ((rr = read(ofd, buff, sizeof(buff))) > 0)
	{
		if (write(tfd, buff, rr) != rr)
		{
			fprintf(stderr, "Error: Write to destination file failed (%s)\n", strerror(errno));
			close(ofd);
			close(tfd);
			exit(99);
		}
	}
	if (rr == -1)
	{
		fprintf(stderr, "Error: Can't read from source file (%s)\n", strerror(errno));
		close(ofd);
		close(tfd);
		exit(98);
	}
	if (close(ofd) == -1 || close(tfd) == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor (%s)\n", strerror(errno));
		exit(100);
	}
}
