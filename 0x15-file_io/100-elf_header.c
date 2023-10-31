#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

void get_magic(ElfW(Ehdr) hdr);
void get_class(ElfW(Ehdr) hdr);
void get_data(ElfW(Ehdr) hdr);
void get_version(ElfW(Ehdr) hdr);
void get_os(ElfW(Ehdr) hdr);
void get_abi(ElfW(Ehdr) hdr);
void get_type(ElfW(Ehdr) hdr);
void get_entry(ElfW(Ehdr) hdr);
unsigned long int reverse_bit32(unsigned long int x);
unsigned long int reverse_bit64(unsigned long int x);

/**
 * main - Displays the information contained in the
 *	  ELF header at the start of an ELF file.
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	ElfW(Ehdr) header;
	int o, r, c;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	o = open(argv[1], O_RDONLY);
	r = read(o, &header, sizeof(header));
	if (header.e_type != 0x7f && header.e_ident[1] != 'E' &&
			header.e_ident[2] != 'L' && header.e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
	if (o == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	get_magic(header);
	get_class(header);
	get_data(header);
	get_version(header);
	get_os(header);
	get_abi(header);
	get_type(header);
	get_entry(header);
	c = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(98);
	}
	return (0);
}

/**
 * get_magic - Prints magic number of ELF file
 * @hdr: ELF struct
 */
void get_magic(ElfW(Ehdr) hdr)
{
	unsigned int i = 0;

	printf("  Magic:   ");
	while (i <  EI_NIDENT)
	{
		printf("%02x", hdr.e_ident[i]);
		if (i <  EI_NIDENT - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * get_class - Prints class of ELF file
 * @hdr: ELF struct
 */
void get_class(ElfW(Ehdr) hdr)
{
	printf("  Class:                             ");
	switch (hdr.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASSNONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", hdr.e_ident[EI_CLASS]);
			break;
	}

}

/**
 * get_data - Prints data of ELF file
 * @hdr: ELF struct
 */
void get_data(ElfW(Ehdr) hdr)
{
	printf("  Data:                              ");
	switch (hdr.e_ident[EI_DATA])
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
			printf("<unknown: %x>\n", hdr.e_ident[EI_DATA]);
			break;

	}
}

/**
 * get_version - Prints version of ELF file
 * @hdr: ELF struct
 */
void get_version(ElfW(Ehdr) hdr)
{
	printf("  Version:                           ");
	switch (hdr.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("%d (current)\n", hdr.e_ident[EI_VERSION]);
			break;
		default:
			printf("%d\n", hdr.e_ident[EI_VERSION]);
			break;
	}
}

/**
 * get_os - Prints os of ELF file
 * @hdr: ELF struct
 */
void get_os(ElfW(Ehdr) hdr)
{
	printf("  OS/ABI:                            ");
	switch (hdr.e_ident[EI_OSABI])
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
			printf("<unknown: %x>\n", hdr.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * get_abi - Prints abi of ELF file
 * @hdr: ELF struct
 */
void get_abi(ElfW(Ehdr) hdr)
{
	printf("  ABI Version:                       ");
	printf("%d\n", hdr.e_ident[EI_ABIVERSION]);
}

/**
 * get_type - Prints type of ELF file
 * @hdr: ELF struct
 */
void get_type(ElfW(Ehdr) hdr)
{
	if (hdr.e_ident[EI_DATA] == ELFDATA2MSB)
		hdr.e_type >>= 8;
	printf("  Type:                              ");
	switch (hdr.e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x", hdr.e_type);
			break;
	}
}

/**
 * get_entry - Prints entry of ELF file
 * @hdr: ELF struct
 */
void get_entry(ElfW(Ehdr) hdr)
{
	unsigned long int num = hdr.e_entry;

	printf("  Entry point address:               ");
	if (hdr.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		num = ((num << 8) & 0xFF00FF00) | ((num >> 8) & 0xFF00FF);
		num = (num << 16) | (num >> 16);
	}

	if (hdr.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)num);

	else
		printf("%#lx\n", num);
}
