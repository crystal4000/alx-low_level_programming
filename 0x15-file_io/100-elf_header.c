#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

/**
 * print_error_and_exit - Prints an error message
 * to stderr and exits with status code 98.
 *
 * @message: The error message to print.
 */
void print_error_and_exit(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Prints the information from the ELF header.
 *
 * @header: Pointer to the ELF header.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);

	printf("\nClass:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Version:			   %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:			   %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", header->e_type);
	printf("Entry point address:               0x%lx\n",
			(unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error_and_exit("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error_and_exit("Error: Cannot open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error_and_exit("Error: Cannot read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1
			||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		print_error_and_exit("Error: Not an ELF file");

	print_elf_header_info(&header);

	close(fd);
	return (0);
}

