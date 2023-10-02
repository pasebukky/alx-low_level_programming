#include "main.h"

/**
 * print_error_and_exit - Print an error message to stderr and exit with status code 98.
 * @message: The error message to be printed.
 */
void print_error_and_exit(const char *message)
{
printf("Error: %s\n", message);
exit(98);
}

/**
 * print_elf_info - Print information from the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */

void print_elf_info(Elf64_Ehdr *elf_header)
{
int i;

printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++) 
{
	printf("%02x ", elf_header->e_ident[i]);
}
printf("\nClass: %d-bit\n", elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
printf("Data: %s-endian\n", elf_header->e_ident[EI_DATA] == ELFDATA2MSB ? "big" : "little");
printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
printf("Type: %d\n", elf_header->e_type);
printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char *argv[])
{
const char *filename;
int fd;
Elf64_Ehdr elf_header;

if (argc != 2) 
{
	print_error_and_exit("Usage: elf_header elf_filename");
}

filename = argv[1];
fd = open(filename, O_RDONLY);

if (fd == -1) 
{
	print_error_and_exit("Failed to open file");
}

if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) 
{
	print_error_and_exit("Failed to read ELF header");
}

if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) 
{
	print_error_and_exit("Not an ELF file");
}
print_elf_info(&elf_header);

close(fd);
return (0);
}
