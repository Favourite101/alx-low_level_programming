#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void is_elf(unsigned char *elfin);
void magic(unsigned char *elfin);
void class(unsigned char *elfin);
void data(unsigned char *elfin);
void version(unsigned char *elfin);
void abi(unsigned char *elfin);
void osabi(unsigned char *elfin);
void type(unsigned int e_type, unsigned char *elfin);
void entry(unsigned long int e_entry, unsigned char *elfin);
void ex_elf(int elf);

/**
 * is_elf - is elf
 * @elfi: elf numbers
 *
 * Return: void
 */
void is_elf(unsigned char *elfin)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (elfin[index] != 127 &&
		    elfin[index] != 'E' &&
		    elfin[index] != 'L' &&
		    elfin[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - prints magic numbers
 * @elfi: elf numbers
 *
 * Return: void
 */
void magic(unsigned char *elfin)
{
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elfin[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class - prints class
 * @elfi: elf numbers
 *
 * Return: void
 */
void class(unsigned char *elfin)
{
	printf("  Class:                             ");
	switch (elfin[EI_CLASS])
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
		printf("<unknown: %x>\n", elfin[EI_CLASS]);
	}
}

/**
 * data - prints data
 * @elfi: elf numbers
 *
 * Return: void
 */
void data(unsigned char *elfin)
{
	printf("  Data:                              ");
	switch (elfin[EI_DATA])
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
		printf("<unknown: %x>\n", elfin[EI_CLASS]);
	}
}

/**
 * version - prints version
 * @elfi: elf numbers
 *
 * Return: void
 */
void version(unsigned char *elfin)
{
	printf("  Version:                           %d",
	       elfin[EI_VERSION]);

	switch (elfin[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * abi - prints ABI
 * @elfi: elf numbers
 *
 * Return: void
 * 
 */
void osabi(unsigned char *elfin)
{
	printf("  OS/ABI:                            ");
	switch (elfin[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elfin[EI_OSABI]);
	}
}

/**
 * abi - prints ABI
 * @elfi: elf numbers
 *
 * Return: void
 * 
 */
void abi(unsigned char *elfin)
{
	printf("  ABI Version:                       %d\n",
	       elfin[EI_ABIVERSION]);
}

/**
 * type - prints type
 * @e_type: The ELF type.
 * @elfi: elf numbers
 *
 * Return: void
 */
void type(unsigned int e_type, unsigned char *elfin)
{
	if (elfin[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry - prints entry
 * @elfe: address
 * @elfi: elf numbers
 *
 * Return: void
 */
void entry(unsigned long int e_entry, unsigned char *elfin)
{
	printf("  Entry point address:               ");

	if (elfin[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (elfin[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_e - sloses an ELF file
 * @elf: file descriptor
 *
 * Return: void
 */
void ex_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - main function
 * @argc: arg count
 * @argv: arg array
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		ex_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		ex_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	is_elf(header->elfin);
	printf("ELF Header:\n");
	magic(header->elfin);
	class(header->elfin);
	data(header->elfin);
	version(header->elfin);
	osabi(header->elfin);
	abi(header->elfin);
	type(header->e_type, header->elfin);
	entry(header->e_entry, header->elfin);
	free(header);
	ex_elf(o);

	return (0);
}