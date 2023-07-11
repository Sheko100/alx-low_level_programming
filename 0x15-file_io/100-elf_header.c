#include <elf.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * iself - checks if file is ELF
 * @class: class byte to check
 *
 * Return: 1 if elf
 * 0 otherwise
 */

int iself(char class)
{
	int n = 1;

	if (class != ELFCLASS32 && class != ELFCLASS64)
		n = 0;

	return (n);
}
/**
 * printmag - prints magic bytes
 * @magic: pointer to array of magic bytes
 *
 * Return: void always
 */

void printmag(char *magic)
{
	int i = 0;

	printf("  Magic:  ");
	while (i < 16)
	{
		printf(" %02x", magic[i]);
		i++;
	}
	printf("\n");
}

/**
 * printcls - checks class byte and prints the class
 * @class: class byte to check
 *
 * Return: void always
 */

void printcls(char class)
{
	printf("  Class:			");
	if (class == ELFCLASS64)
		printf("     ELF64\n");
	else if (class == ELFCLASS32)
		printf("     ELF32\n");
}

/**
 * printdata - check the ELF data byte and prints it
 * @data: data byte to check
 *
 * Return: void always
 */

void printdata(char data)
{
	printf("  Data:				");
	if (data == ELFDATANONE)
		printf("     Uknown data format\n");
	else if (data == ELFDATA2LSB)
		printf("     2's complement, little indian\n");
	else if (data == ELFDATA2MSB)
		printf("     2's complement, big indian\n");
}

/**
 * printver - checks ELF file version and prints it
 * @version: vesrion byte to check
 *
 * Return: void always
 */

void printver(char version)
{
	printf("  Version:			");

	if (version == EV_NONE)
		printf("     Invalid version\n");
	else if (version == EV_CURRENT)
		printf("     1 (current)\n");
}

/**
 * printosabi - check the ELF file OS/ABI and prints it
 * @osabi: osabi byte to check
 *
 * Return: void	always
 */

void printosabi(char osabi)
{
	printf("  OS/ABI:			");
	switch (osabi)
	{
		case ELFOSABI_NONE:
			printf("     UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("     UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("     UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("     UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("     UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("     UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("     UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("     UNIX - TRUE64\n");
			break;
		case ELFOSABI_ARM:
			printf("     UNIX - ARM\n");
			break;
		default:
			printf("     <unknown: %d\n", osabi);
	}
}

/**
 * printabiver - prints the ABI version
 * @abiver: ABI version to check
 *
 * Return: void always
 */

void printabiver(char abiver)
{
	printf("  ABI Version:			");
	printf("     %d\n", abiver);
}

/**
 * notelferr - prints not ELF file error
 *
 * Return: void
 */

void notelferr(void)
{
	printf("Error: Not an ELF file\n");
	exit(99);
}

/**
 * main - displays the information contained in
 * the ELF header at the start of an ELF file
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: 0 always
 */

int main(int ac, char **av)
{
	int fd, readbytes;
	char ident[EI_NIDENT];

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header file_name\n");
		exit(96);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Failed to open %s\n", av[1]);
		exit(97);
	}

	readbytes = read(fd, ident, 16);
	if (readbytes == -1)
	{
		dprintf(STDERR_FILENO, "Failed to read %s\n", av[1]);
		exit(98);
	}

	if (!iself(ident[4]))
		notelferr();

	printf("ELF Header:\n");
	printmag(ident);
	printcls(ident[4]);
	printdata(ident[5]);
	printver(ident[6]);
	printosabi(ident[7]);
	printabiver(ident[8]);

	close(fd);
	return (0);
}
