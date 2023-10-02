#include "main.h"

/**
 * error_exit - prints an error message and exits with a specified code.
 * @message: error message
 * @exit_code: exit code used when exiting.
 */

void error_exit(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
 * open_file - opens a file with specified flags and mode, handles errors.
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
	error_exit("Error: Can't open file", 98);
}
return (fd);
}

/**
 * copy_file - copies the content of one file to another.
 * @file_from: source file to copy from.
 * @file_to: destination file to copy to.
 */

void copy_file(const char *file_from, const char *file_to)
{
int file_from_fd, file_to_fd;
char *content;
ssize_t text_read, text_written;

file_from_fd = open_file(file_from, O_RDONLY, 0);
file_to_fd = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
S_IWUSR | S_IRGRP | S_IROTH);

content = malloc(BUFSIZ);

if (content == NULL)
{
	error_exit("Error: Memory allocation failed", 100);
}

while ((text_read = read(file_from_fd, content, BUFSIZ)) > 0)
{
	text_written = write(file_to_fd, content, text_read);
	if (text_written != text_read)
	{
		error_exit("Error: Can't write to file", 99);
	}
}

free(content);

close(file_from_fd);
close(file_to_fd);
}

/**
 * main - entry point of the program.
 * @argc:number of command-line arguments.
 * @argv: array of command-line argument strings.
 *
 * Return: 0 on success, or exits with an error code.
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
	error_exit("Usage: cp file_from file_to", 97);
}

copy_file(argv[1], argv[2]);

return (0);
}
