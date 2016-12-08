#include <elf.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
//http://www.jinmei.org/download/unwindtest.c
//https://github.com/BR903/ELFkickers/blob/master/elftoc/readelf.c
//https://onyx.boisestate.edu/repos/amit/cs453/lab/process-management/display-elf-headers.c

void printMagic(void *ehdr);
int main (int argc, char *argv[])
{
  int file;
  file = open(argv[1], O_RDONLY);
  if (file == -1)
    {
    printf("Error opening file.");
    perror("");
    }
  Elf64_Ehdr header;
  read(file, &header, sizeof(Elf64_Ehdr));
//  if (header.e_ident[0] != 127 || header.e_ident[1] != 'E' ||
  //     header.e_ident[2] != 'L' || header.e_ident[2] != 'F')
  // {
//	  exit(98); /* Not an ELF File! */
//  }
  printf("ELF Header:\n");
  printMagic(&header);
}

void printMagic(void *header)
{
	Elf64_Ehdr *ehdr = header;
	printf("Magic:   ");
	printf("%02x ", ehdr->e_ident[0]);
	printf("%02x ", ehdr->e_ident[1]);
	printf("%02x ", ehdr->e_ident[2]);
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
	printf("%02x ", ehdr->e_ident[15]);
}

void printClass(void *ehdr)
{

}

void printData(void *ehdr)
{

}
void printVersion(void *ehdr)
{

}

void printOS(void *ehdr)
{

}

void printABI(void *ehdr)
{

}

void printType(void *ehdr)
{

}

void printEntry(void *ehdr)
{

}
