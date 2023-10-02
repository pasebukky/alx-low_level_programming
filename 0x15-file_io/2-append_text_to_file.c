#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t length;
ssize_t text_written;

length = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
	length = strlen(text_content);

file = open(filename, O_WRONLY | O_APPEND);

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
