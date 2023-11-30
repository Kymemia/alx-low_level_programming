#ifndef _MAIN_
#define _MAIN_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *src, const char *dest);
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s source_file destination_file\n", argv[0]);
		exit (1);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
#endif
