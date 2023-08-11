#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void is_elf(unsigned char *elfid);
void magic(unsigned char *elfid);
void class(unsigned char *elfid);
void data(unsigned char *elfid);
void version(unsigned char *elfid);
void abi(unsigned char *elfid);
void osabi(unsigned char *elfid);
void type(unsigned int elfty, unsigned char *elfid);
void entry(unsigned long int elfen, unsigned char *elfid);
void ex_elf(int elf);

/**
 * is_elf - is elf
 * @elfid: elf numbers
 *
 * Return: void
 */
void is_elf(unsigned char *elfid)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (elfid[idx] != 127 &&
		    elfid[idx] != 'E' &&
		    elfid[idx] != 'L' &&
		    elfid[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - prints magic numbers
 * @elfid: elf numbers
 *
 * Return: void
 */
void magic(unsigned char *elfid)
{
	int idx;

	printf("  Magic:   ");
	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", elfid[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class - prints class
 * @elfid: elf numbers
 *
 * Return: void
 */
void class(unsigned char *elfid)
{
	printf("  Class:                             ");
	switch (elfid[EI_CLASS])
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
		printf("<unknown: %x>\n", elfid[EI_CLASS]);
	}
}

/**
 * data - prints data
 * @elfid: elf numbers
 *
 * Return: void
 */
void data(unsigned char *elfid)
{
	printf("  Data:                              ");
	switch (elfid[EI_DATA])
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
		printf("<unknown: %x>\n", elfid[EI_CLASS]);
	}
}

/**
 * version - prints version
 * @elfid: elf numbers
 *
 * Return: void
 */
void version(unsigned char *elfid)
{
	printf("  Version:                           %d",
	       elfid[EI_VERSION]);

	switch (elfid[EI_VERSION])
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
 * @elfid: elf numbers
 *
 * Return: void
 * 
 */
void osabi(unsigned char *elfid)
{
	printf("  OS/ABI:                            ");
	switch (elfid[EI_OSABI])
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
		printf("<unknown: %x>\n", elfid[EI_OSABI]);
	}
}

/**
 * abi - prints ABI
 * @elfid: elf numbers
 *
 * Return: void
 * 
 */
void abi(unsigned char *elfid)
{
	printf("  ABI Version:                       %d\n",
	       elfid[EI_ABIVERSION]);
}

/**
 * type - prints type
 * @elfty: The ELF type.
 * @elfid: elf numbers
 *
 * Return: void
 */
void type(unsigned int elfty, unsigned char *elfid)
{
	if (elfid[EI_DATA] == ELFDATA2MSB)
		elfty >>= 8;
	printf("  Type:                              ");
	switch (elfty)
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
		printf("<unknown: %x>\n", elfty);
	}
}

/**
 * entry - prints entry
 * @elfen: address
 * @elfid: elf numbers
 *
 * Return: void
 */
void entry(unsigned long int elfen, unsigned char *elfid)
{
	printf("  Entry point address:               ");

	if (elfid[EI_DATA] == ELFDATA2MSB)
	{
		elfen = ((elfen << 8) & 0xFF00FF00) |
			  ((elfen >> 8) & 0xFF00FF);
		elfen = (elfen << 16) | (elfen >> 16);
	}
	if (elfid[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elfen);
	else
		printf("%#lx\n", elfen);
}

/**
 * ex_elf - sloses an ELF file
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
	is_elf(header->elfid);
	printf("ELF Header:\n");
	magic(header->elfid);
	class(header->elfid);
	data(header->elfid);
	version(header->elfid);
	osabi(header->elfid);
	abi(header->elfid);
	type(header->elfty, header->elfid);
	entry(header->elfen, header->elfid);
	free(header);
	ex_elf(o);

	return (0);
}