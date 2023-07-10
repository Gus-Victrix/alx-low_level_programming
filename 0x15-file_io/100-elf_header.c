#include "main.h"
#include <stdint.h>

/**
* main - Not complited, try to print elf headers
*
* @argc: Not used
* @argv: Arg
*
* Return: 0 (succes)
*/
int main(int  __attribute__((__unused__))  argc, char *argv[])
{
	int file, i, test_read;
	ELFHEADER elf;

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open the file %s\n", argv[1]);
		exit(98);
	}
	test_read = read(file, &elf, sizeof(elf));
	if (test_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\n");

	printf("Magic:\t");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", elf.e_ident[i]);
	}
	close(file);
	return (0);
}
