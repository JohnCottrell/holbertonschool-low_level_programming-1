#include <elf.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
//http://www.jinmei.org/download/unwindtest.c
//https://github.com/BR903/ELFkickers/blob/master/elftoc/readelf.c
//https://onyx.boisestate.edu/repos/amit/cs453/lab/process-management/display-elf-headers.c
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
  printf("Magic: %x %x %x %x\n", header.e_ident[0], header.e_ident[1], header.e_ident[2], header.e_ident[3]);
}
