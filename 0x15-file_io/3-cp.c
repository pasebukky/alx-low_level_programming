#include "main.h"

/**
 * open_file - Opens a file with specified flags and mode, handles errors.
 * @filename: name of the file to open.
 * @flags: flags for opening the file.
 * @mode: mode to set if creating the file.
 *
 * Return: file descriptor on success, or exits on failure.
 */

int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);

if (fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
	exit(98);
}
return (fd);
}

/**
 * copy_file - Copies the contents of one file to another.
 * @file_from: source file to copy from.
 * @file_to: destination file to copy to.
 */

void copy_file(const char *file_from, const char *file_to)
{
int file_from_fd, file_to_fd;
ssize_t text_read, text_written;
char *buffer;

file_from_fd = open_file(file_from, O_RDONLY, 0);
file_to_fd = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
S_IWUSR | S_IRGRP | S_IROTH);

buffer = malloc(1024);

if (buffer == NULL)
{
	dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
	exit(100);
}

while ((text_read = read(file_from_fd, buffer, 1024)) > 0)
{
	text_written = write(file_to_fd, buffer, text_read);

	if (text_written != text_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
}
free(buffer);
close(file_from_fd);
close(file_to_fd);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, or exits with an error code.
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
copy_file(argv[1], argv[2]);

return (0);
}
