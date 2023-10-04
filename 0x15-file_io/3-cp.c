#include "main.h"


int open_file(const char *filename, int flags, mode_t mode);
void copy_file(const char *file_from, const char *file_to);

int open_file(const char *filename, int flags, mode_t mode)
{
    int fd = open(filename, flags, mode);

    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    return (fd);
}

void copy_file(const char *file_from, const char *file_to)
{
    int src_file, dest_file;
    ssize_t text_read, text_written;
    char buffer[1024];

    src_file = open_file(file_from, O_RDONLY, 0);
    dest_file = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

    while ((text_read = read(src_file, buffer, sizeof(buffer))) > 0)
    {
        if (text_read == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
            exit(EXIT_FAILURE);
        }

        text_written = write(dest_file, buffer, text_read);

        if (text_written == -1 || text_written != text_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
            exit(EXIT_FAILURE);
        }
    }

    if (close(src_file) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
        exit(EXIT_FAILURE);
    }

    if (close(dest_file) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    copy_file(argv[1], argv[2]);

    return (EXIT_SUCCESS);
}

