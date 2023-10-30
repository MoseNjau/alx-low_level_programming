#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_elf_header - Display information from ELF header
 * @header: Pointer to the ELF header
 */
void display_elf_header(Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");

	printf("  Class:                             %s\n",
		(header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
		(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", (header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
		(header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	const char *file_type;
	switch (header->e_type)
	{
		case ET_NONE:
			file_type = "NONE (Unknown type)";
			break;
		case ET_REL:
			file_type = "REL (Relocatable file)";
			break;
		case ET_EXEC:
			file_type = "EXEC (Executable file)";
			break;
		case ET_DYN:
			file_type = "DYN (Shared object file)";
			break;
		case ET_CORE:
			file_type = "CORE (Core file)";
			break;
		default:
			file_type = "Unknown";
	}
	printf("  Type:                              %s\n", file_type);

	printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: (0) for success, (98) for errors
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		return (98);
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		return (98);
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}
