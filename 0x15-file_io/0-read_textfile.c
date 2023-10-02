#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: name of the file.
 * @letters: number of letters to be read and printed
 * Return: 0 if filename is NULL
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char *content;
ssize_t content_read;
ssize_t content_written;

if (filename == NULL)
	return (0);

file = open (filename, O_RDONLY);

if (file == -1)
	return (0);

content = malloc(letters * sizeof(char));

content_read = read(file, content, letters);

if (content_read == -1)
{
	close(file);
	return (0);
}

content_written = write(STDOUT_FILENO, content, content_read);

close(file);

if (content_written == -1 || content_written != content_read)
	return (0);

return(content_read);
}
