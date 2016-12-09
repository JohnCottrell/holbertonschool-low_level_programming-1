#include <elf.h>
#include "holberton.h"
#include <stdio.h>


/**
 * printMagic - prints the magic numbers!
 *
 * @header: pointer to an Elf_Ehdr
 */
void printMagic(void *header)
{
	Elf64_Ehdr *ehdr = header;
	int i;

	printf("  Magic:   ");
	i = 0;
	while (i != 15)
	{
		printf("%02x ", ehdr->e_ident[i]);
		i++;
	}
	printf("%02x\n", ehdr->e_ident[15]);
}

/**
 * printClass - prints class info
 *
 * @header: pointer to an Elf_Ehdr
 * Return: returns 32 for 32 bit arch, 64 for 64
 */
int printClass(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Class:");
	printf("                             ");
	switch (ehdr->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		return (32);
	case ELFCLASS64:
		printf("ELF64\n");
		return (64);
	case ELFCLASSNONE:
		printf("Invalid class\n");
		return (64);
	default:
		printf("<unknown: %d>\n", ehdr->e_ident[EI_CLASS]);
		return (64);
	}
}

/**
 * printData - prints data type info for elf header
 *
 * @header: pointer to an Elf_Ehdr
 * Return: Returns 1 for little endian, 2 for big
 */
int printData(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Data:");
	printf("                              ");
	switch (ehdr->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Invalid ELF data\n");
		return (1);
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		return (1);
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		return (2);
	}
	return (1);
}

/**
 * printVersion - prints version information
 *
 * @header: pointer to an Elf_Ehdr
 */
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

/**
 * printOS - prints OS information
 *
 * @header: pointer to an Elf_Ehdr
 */
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
