#include "main.h"

void print_error(const char *message)
{
fprintf(stderr, "Error: %s\n", message);
exit(98);
}

void display_elf_header(const Elf64_Ehdr *elf_header)
{
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", elf_header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
switch (elf_header->e_ident[4])
{
case 0: printf("Invalid\n"); 
	break;
case 1: printf("ELF32\n");
       	break;
case 2: printf("ELF64\n");
       	break;
default: printf("Unknown\n"); 
	 break;
}
printf("  Data:                              ");
switch (elf_header->e_ident[5])
{
case 0: printf("Invalid\n");
       	break;
case 1: printf("2's complement, little endian\n"); 
	break;
case 2: printf("2's complement, big endian\n");
       	break;
default: printf("Unknown\n");
	 break;
}
printf("  Version:                           %u (current)\n", elf_header->e_ident[6]);
printf("  OS/ABI:                            ");
switch (elf_header->e_ident[7])
{
case 0: printf("System V\n"); 
	break;
case 1: printf("HP-UX\n");
       	break;
case 2: printf("NetBSD\n"); 
	break;
case 3: printf("Linux\n"); 
	break;
case 6: printf("Sun Solaris\n"); 
	break;
case 7: printf("IBM AIX\n"); 
	break;
case 8: printf("SGI Irix\n"); 
	break;
case 9: printf("FreeBSD\n"); 
	break;
case 10: printf("Compaq TRU64\n"); 
	 break;
case 11: printf("Novell Modesto\n"); 
	 break;
case 12: printf("OpenBSD\n");
	 break;
case 13: printf("OpenVMS\n"); 
	 break;
case 14: printf("HP Non-Stop Kernel\n");
	 break;
case 15: printf("Amiga Research OS\n");
	 break;
case 16: printf("The Fenix OS\n");
	 break;
case 17: printf("Nuxi CloudABI\n");
	 break;
case 18: printf("Stratus Technologies OpenVOS\n");
	 break;
default: printf("Unknown\n");
	 break;
}
printf("  ABI Version:                       %u\n", elf_header->e_ident[8]);
printf("  Type:                              ");
switch (elf_header->e_type)
{
case 0: printf("No file type\n");
       	break;
case 1: printf("Relocatable file\n");
       	break;
case 2: printf("Executable file\n");
       	break;
case 3: printf("Shared object file\n");
       	break;
case 4: printf("Core file\n");
       	break;
default: printf("Unknown\n");
	 break;
}
printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char *argv[])
{
Elf64_Ehdr elf_header;
const char *filename;
int fd;
char ident[EI_NIDENT];

if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}

filename = argv[1];
fd = open(filename, O_RDONLY);
if (fd == -1)
{
print_error("Failed to open file");
}

if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
print_error("Failed to read ELF header");
}

if (lseek(fd, 0, SEEK_SET) == -1)
{
print_error("Failed to reset file position");
}

if (read(fd, ident, EI_NIDENT) != EI_NIDENT)
{
print_error("Failed to read ELF identification");
}

if (memcmp(ident, "\x7F""ELF", 4) != 0)
{
print_error("File is not an ELF file");
}

display_elf_header(&elf_header);

close(fd);

return (0);
}

