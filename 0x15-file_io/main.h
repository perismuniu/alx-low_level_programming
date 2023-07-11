#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>

#define BUFFER_SIZE 1024
#define EI_NIDENT 16

/**
 * struct Elf64_Ehdr - ELF header structure for 64-bit architecture
 *
 * @e_ident:     ELF identification field
 * @e_type:      Object file type
 * @e_machine:   Target instruction set architecture
 * @e_version:   Version of the ELF file format
 * @e_entry:     Virtual address of the entry point
 * @e_phoff:     Offset of the program header table
 * @e_shoff:     Offset of the section header table
 * @e_flags:     Architecture-specific flags
 * @e_ehsize:    Size of the ELF header
 * @e_phentsize: Size of each program header table entry
 * @e_phnum:     Number of program header table entries
 * @e_shentsize: Size of each section header table entry
 * @e_shnum:     Number of section header table entries
 * @e_shstrndx:  Index of the section header with the section names
 */

typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
