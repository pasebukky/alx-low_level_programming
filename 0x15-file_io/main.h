#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_file(const char *filename, int flags, mode_t mode);
void copy_file(const char *file_from, const char *file_to);
void print_error_and_exit(const char *message);
void print_elf_info(Elf64_Ehdr *elf_header);


#endif
