#include "main.h"

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @message: The error message to print.
 * @exit_code: The exit code to use when exiting
 */

void error_exit(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
 * open_and_create_files - Opens source and destination files.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 * @source_fd: Pointer to store the source file descriptor.
 * @destination_fd: Pointer to store the destination file descriptor.
 *
 * Return: 0 on success, -1 on failure.
 */

int open_and_create_files(const char *file_from, const char *file_to, int *source_fd, int *destination_fd)
{
*source_fd = open(file_from, O_RDONLY);
if (*source_fd == -1)
{
    return (-1);
}

*destination_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (*destination_fd == -1)
{
    return (-1);
}
return (0);
}


/**
 * copy_data - Copies data from source file to destination file.
 * @source_fd: The source file descriptor.
 * @destination_fd: The destination file descriptor.
 */

void copy_data(int source_fd, int destination_fd)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
    bytes_written = write(destination_fd, buffer, bytes_read);
    if (bytes_written != bytes_read)
    {
        error_exit("Error: Can't write to destination file", 99);
    }
}
}


/**
 * close_files - Closes source and destination files.
 * @source_fd: The source file descriptor.
 * @destination_fd: The destination file descriptor.
 */

void close_files(int source_fd, int destination_fd)
{
close(source_fd);
close(destination_fd);
}

int main(int argc, char *argv[])
{
int source_fd, destination_fd;

if (argc != 3)
{
	error_exit("Usage: cp file_from file_to", 97);
}

if (open_and_create_files(argv[1], argv[2], &source_fd, &destination_fd) == -1)
{
	error_exit("Error opening or creating files", 99);
}

copy_data(source_fd, destination_fd);

close_files(source_fd, destination_fd);

return (0);
}

