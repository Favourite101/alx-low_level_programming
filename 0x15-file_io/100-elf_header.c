#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void is_elf(unsigned char *elfi);
void magic(unsigned char *elfi);
void class(unsigned char *elfi);
void data(unsigned char *elfi);
void version(unsigned char *elfi);
void abi(unsigned char *elfi);
void osabi(unsigned char *elfi);
void type(unsigned int e_type, unsigned char *elfi);
void entry(unsigned long int elfe, unsigned char *elfi);
void close(int elf);

/**
 * is_elf - is elf
 * @elfi: elf numbers
 *
 * Return: void
 */
void is_elf(unsigned char *elfi)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (elfi[index] != 127 &&
		    elfi[index] != 'E' &&
		    elfi[index] != 'L' &&
		    elfi[index] != 'F')
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
void magic(unsigned char *elfi)
{
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elfi[index]);
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
void class(unsigned char *elfi)
{
	printf("  Class:                             ");
	switch (elfi[EI_CLASS])
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
		printf("<unknown: %x>\n", elfi[EI_CLASS]);
	}
}

/**
 * data - prints data
 * @elfi: elf numbers
 *
 * Return: void
 */
void data(unsigned char *elfi)
{
	printf("  Data:                              ");
	switch (elfi[EI_DATA])
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
		printf("<unknown: %x>\n", elfi[EI_CLASS]);
	}
}

/**
 * version - prints version
 * @elfi: elf numbers
 *
 * Return: void
 */
void version(unsigned char *elfi)
{
	printf("  Version:                           %d",
	       elfi[EI_VERSION]);
	switch (elfi[EI_VERSION])
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
 * osabi - prints OS/ABI
 * @elfi: elf numbers
 *
 * Return: void
 */
void osabi(unsigned char *elfi)
{
	printf("  OS/ABI:                            ");
	switch (elfi[EI_OSABI])
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
		printf("<unknown: %x>\n", elfi[EI_OSABI]);
	}
}

/**
 * abi - prints ABI
 * @elfi: elf numbers
 *
 * Return: void
 * 
 */
void abi(unsigned char *elfi)
{
	printf("  ABI Version:                       %d\n",
	       elfi[EI_ABIVERSION]);
}

/**
 * type - prints type
 * @e_type: The ELF type.
 * @elfi: elf numbers
 *
 * Return: void
 */
void type(unsigned int e_type, unsigned char *elfi)
{
	if (elfi[EI_DATA] == ELFDATA2MSB)
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
void entry(unsigned long int elfe, unsigned char *elfi)
{
	printf("  Entry point address:               ");
	if (elfi[EI_DATA] == ELFDATA2MSB)
	{
		elfe = ((elfe << 8) & 0xFF00FF00) |
			  ((elfe >> 8) & 0xFF00FF);
		elfe = (elfe << 16) | (elfe >> 16);
	}
	if (elfi[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elfe);
	else
		printf("%#lx\n", elfe);
}

/**
 * close - sloses an ELF file
 * @elf: file descriptor
 *
 * Return: void
 */
void close(int elf)
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
		close(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	is_elf(header->elfi);
	printf("ELF Header:\n");
	magic(header->elfi);
	class(header->elfi);
	data(header->elfi);
	version(header->elfi);
	osabi(header->elfi);
	abi(header->elfi);
	type(header->e_type, header->elfi);
	entry(header->elfe, header->elfi);
	free(header);
	close(o);

	return (0);
}
