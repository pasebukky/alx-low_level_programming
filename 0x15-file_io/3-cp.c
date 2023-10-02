#include "main.h"

int open_file(const char *filename, int flags, mode_t mode);
void copy_file(const char *file_from, const char *file_to);

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

void copy_file(const char *file_from, const char *file_to)
{
	int src_file, dest_file;
	ssize_t text_read, text_written;
	char *buffer = malloc(1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(100);
	}

	src_file = open_file(file_from, O_RDONLY, 0);
	dest_file = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((text_read = read(src_file, buffer, 1024)) > 0)
	{
		if (text_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			close(src_file);
			close(dest_file);
			exit(98);
		}

		text_written = write(dest_file, buffer, text_read);

		if (text_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			free(buffer);
			close(src_file);
			close(dest_file);
			exit(99);
		}
	}

	free(buffer);

	if (close(src_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	if (close(dest_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
		exit(100);
	}
}

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

