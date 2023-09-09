#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFFER_SIZE 1024

/**
 * _strlen - Checks string length of string.
 *
 * @s: string to be measured.
 *
 * Return: 0 if error, strlen otherwise.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
/**
 * print_error - Prints the error message.
 *
 * @message: Error message.
 */
void print_error(const char *message)
{
	write(2, "Error: ", 7);
	write(2, message, _strlen(message));
	exit(98);
}

/**
 * magc - prints the ELF Magic
 *
 * @header: Header of file to be printed.
 */
void magc(const Elf64_Ehdr *header)
{
	int i = 0;

	printf("ELF Header:\nMagic:  ");
	while (i < EI_NIDENT)
		printf("%02x ", header->e_ident[i++]);
	printf("\n");
}

/**
 * cls - Prints the class of elf file
 *
 * @header: Header of input elf
 */
void cls(const Elf64_Ehdr *header)
{
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * dta - Prints the data of an elf
 *
 * @header: Header of input elf
 */
void dta(const Elf64_Ehdr *header)
{
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("unknown\n");
		break;
	}
}

/**
 * versn - prints the version of an elf
 *
 * @header: Header of elf
 */
void versn(const Elf64_Ehdr *header)
{
	int i = header->e_ident[EI_VERSION];

	printf("  Version:                           %d (current)\n", i);
}

/**
 * os_abi - prints the os/abi of file.
 *
 * @header: Header of elf
 */
void os_abi(const Elf64_Ehdr *header)
{
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("AIX\n");
		break;
	case ELFOSABI_IRIX:
		printf("IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("TRU64 UNIX\n");
		break;
	case ELFOSABI_MODESTO:
		printf("Novell Modesto\n");
		break;
	case ELFOSABI_OPENBSD:
		printf("OpenBSD\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * a_bi_ver - Prints the ABI verison of an elf
 *
 * @header: header of elf
 */
void a_bi_ver(const Elf64_Ehdr *header)
{
	int i = header->e_ident[EI_ABIVERSION];

	printf("  ABI Version:                       %d\n", i);
}

/**
 * tpe - prints the type of an elf
 *
 * @header: Heaer of elf
 */
void tpe(const Elf64_Ehdr *header)
{
	printf("  Type:                              ");
	switch (header->e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_elf_header - prints the header of an elf.
 *
 * @header: Header to be printed.
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	magc(header);
	cls(header);
	dta(header);
	versn(header);
	os_abi(header);
	a_bi_ver(header);
	tpe(header);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Takes elf as terminal argument and prints its elf header.
 *
 * @argc: Number of terminal arguments.
 * @argv: Array of string arguments from terminal.
 *
 * Return: 0 on success, 98 error if unsuccessful.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	Elf64_Ehdr *header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	filename = argv[1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Failed to open the file");

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
		print_error("Failed to read the file");

	header = (Elf64_Ehdr *)buffer;

	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
	header->e_ident[EI_MAG1] != ELFMAG1 ||
	header->e_ident[EI_MAG2] != ELFMAG2 ||
	header->e_ident[EI_MAG3] != ELFMAG3)
		print_error("File is not an ELF file");

	print_elf_header(header);

	close(fd);
	return (0);
}
