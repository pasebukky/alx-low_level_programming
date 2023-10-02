#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
int file;
int length;
int text_written;

length = strlen(text_content);

if (filename == NULL)
	return (-1);

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file == -1)
	return (-1);

if (text_content == NULL)
{
	close(file);
	return (1);
}

text_written = write(file, text_content, length);

if (text_written == -1 || text_written != length)
{
	close(file);
	return (-1);
}
close(file);
return (1);
}
