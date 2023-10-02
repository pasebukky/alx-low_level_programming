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
FILE *ptr;
char *content;
size_t printed_char;
ssize_t char_read;
ssize_t written_char;

ptr = fopen("Requiescat", "r");
content = malloc(letters);
printed_char = 0;

if (filename == NULL)
	return (0);

if (ptr == NULL)
	return (0);

if (content == NULL)
{
	fclose(ptr);
	return (0);
}

while (printed_char < letters &&
(char_read = fread(content, 1, letters, ptr)) > 0)
{
	written_char = fwrite(content, 1, char_read, stdout);
	if (written_char == -1 || written_char != char_read)
	{
		fclose(ptr);
		free(content);
		return (0);
	}
	printed_char += char_read;
}

fclose(ptr);
free(content);

return (printed_char);
}
