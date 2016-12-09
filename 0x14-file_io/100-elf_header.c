#include <elf.h>
#include "holberton.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int file;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		printf("usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	if (argv[1] == NULL)
	{
		error("Null filename.", 98);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		error("Cannot open file.\n", 98);
	read(file, &header, sizeof(Elf64_Ehdr));
	if (header.e_ident[0] != ELFMAG0 || header.e_ident[1] != ELFMAG1 ||
	    header.e_ident[2] != ELFMAG2 || header.e_ident[3] != ELFMAG3)
	{
		error("Error: Not an ELF file- it has the wrong magic bytes at the start\n",
			98);
	}
	printf("ELF Header:\n");
	printMagic(&header);
	printClass(&header);
	printData(&header);
	printVersion(&header);
	printOS(&header);
	printABIVersion(&header);
	printType(&header);
	printEntry(&header);
	return (0);
}

void printMagic(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Magic:   ");
	printf("%02x ", ehdr->e_ident[0]);
	printf("%02x ", ehdr->e_ident[1]);
	printf("%02x ", ehdr->e_ident[2]);
	printf("%02x ", ehdr->e_ident[3]);
	printf("%02x ", ehdr->e_ident[4]);
	printf("%02x ", ehdr->e_ident[5]);
	printf("%02x ", ehdr->e_ident[6]);
	printf("%02x ", ehdr->e_ident[7]);
	printf("%02x ", ehdr->e_ident[8]);
	printf("%02x ", ehdr->e_ident[9]);
	printf("%02x ", ehdr->e_ident[10]);
	printf("%02x ", ehdr->e_ident[11]);
	printf("%02x ", ehdr->e_ident[12]);
	printf("%02x ", ehdr->e_ident[13]);
	printf("%02x ", ehdr->e_ident[14]);
	printf("%02x\n", ehdr->e_ident[15]);
}

void printClass(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Class:");
	printf("                             ");
	switch (ehdr->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32");
		break;
	case ELFCLASS64:
		printf("ELF64");
		break;
	case ELFCLASSNONE:
		printf("Invalid class");
		break;
	}
	printf("\n");
}

void printData(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Data:");
	printf("                              ");
	switch (ehdr->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Invalid ELF data");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian");
		break;
	}
	printf("\n");
}
void printVersion(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Version:");
	printf("                           ");
	switch (ehdr->e_ident[EI_VERSION])
	{
	case EV_NONE:
		printf("Invalid version");
		break;
	case EV_CURRENT:
		printf("1 (current)");
		break;
	}
	printf("\n");
}

void printOS(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  OS/ABI:");
	printf("                            ");
	switch (ehdr->e_ident[EI_OSABI])
	{
	case 0:
		printf("UNIX - System V"); break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX"); break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD"); break;
	case 3:
		printf("UNIX - GNU"); break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris"); break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX"); break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX"); break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD"); break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64"); break;
	case ELFOSABI_MODESTO:
		printf("Novell - Modesto"); break;
	case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD"); break;
	case 13:
		printf("VMS - OpenVMS"); break;
	case 14:
		printf("HP - Non-Stop Kernel"); break;
	case 15:
		printf("AROS"); break;
	case 16:
		printf("FenixOS"); break;
	default:
		printf("<unknown: %d>", ehdr->e_ident[EI_OSABI]);
	}
	printf("\n");
}

void printABIVersion(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  ABI Version:");
	printf("                       ");
	if (ehdr->e_ident[EI_ABIVERSION] == 0)
		printf("0");
	else
		printf("1");
	printf("\n");
}

void printType(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Type:");
	printf("                              ");
	switch (ehdr->e_type)
	{
	case ET_NONE:
		printf("NONE (None)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown>: %d", ehdr->e_type);
	}
	printf("\n");
}

void printEntry(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Entry point address:");
	printf("               ");
	printf("0x%x\n", (unsigned int) ehdr->e_entry);
}

void error(char *errmsg, int exitcode)
{
	write(STDERR_FILENO, errmsg, _strlen(errmsg));
	exit(exitcode);
}

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
