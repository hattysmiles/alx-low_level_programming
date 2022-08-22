#include "holberton.h"

/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	register int fd, r, c;
	Elf64_Ehdr *header;
	
	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(98);

					header = malloc(sizeof(Elf64_Ehdr));

						if (!header)

									dprintf(STDERR_FILENO, "Malloc error\n"), exit(98);

							fd = open(argv[1], O_RDONLY);

								if (fd < 0)

										{

													dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

															exit(98);

																}

									r = read(fd, header, sizeof(Elf64_Ehdr));

										if (r < 0)

												{

															free(header);

																	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

																			exit(98);

																				}

											validate_elf(header->e_ident);

												print_magic(header->e_ident);

													print_class(header->e_ident);

														print_data(header->e_ident);

															print_version(header->e_ident);

																print_osabi(header->e_ident);

																	printf("  ABI Version:                       ");

																		printf("%i\n", header->e_ident[EI_ABIVERSION]);

																			print_type(header->e_type, header->e_ident);

																				print_entry(header->e_entry, header->e_ident);

																					free(header);

																						c = close(fd);

																							if (c)

																										dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);

																								return (0);

}



/**
 *
 *  * validate_elf - helper to check if input is valid elf file
 *
 *   * @e_ident: pointer to char array
 *
 *    */

void validate_elf(unsigned char *e_ident)

{

		if (e_ident[0] == 0x7f && e_ident[1] == 'E' &&

						e_ident[2] == 'L' && e_ident[3] == 'F')

				{

							printf("ELF Header:\n");

								} else

											dprintf(STDERR_FILENO, "Error: Not valid ELF\n"), exit(98);

}



/**
 *
 *  * print_magic - print ELF's magic number
 *
 *   * @e_ident: pointer to char array
 *
 *    */

void print_magic(unsigned char *e_ident)

{

		register int i;



			printf("  Magic:   ");

				for (i = 0; i < EI_NIDENT - 1; i++)

							printf("%02x ", e_ident[i]);

					printf("%02x\n", e_ident[i]);

}

/**
 *
 *  * print_class - print ELF's class
 *
 *   * @e_ident: pointer to char array
 *
 *    */

void print_class(unsigned char *e_ident)

{

		printf("  Class:                             ");

			switch (e_ident[EI_CLASS])

					{

								case ELFCLASSNONE:

												printf("This class is invalid\n");

															break;

																	case ELFCLASS32:

																		printf("ELF32\n");

																					break;

																							case ELFCLASS64:

																								printf("ELF64\n");

																											break;

																													default:

																														printf("<unknown: %x>\n", e_ident[EI_CLASS]);

																															}

}

/**
 *
 *  * print_data - print ELF's data
 *
 *   * @e_ident: pointer to char array
 *
 *    */

void print_data(unsigned char *e_ident)

{

		printf("  Data:                              ");

			switch (e_ident[EI_DATA])

					{

								case ELFDATANONE:

												printf("Unknown data format\n");

															break;

																	case ELFDATA2LSB:

																		printf("2's complement, little endian\n");

																					break;

																							case ELFDATA2MSB:

																								printf("2's complement, big endian\n");

																											break;

																													default:

																														printf("<unknown: %x>\n", e_ident[EI_DATA]);

																															}

}

/**
 *
 *  * print_version - print ELF's version
 *
 *   * @e_ident: pointer to char array
 *
 *    */

void print_version(unsigned char *e_ident)

{

		printf("  Version:                           ");

			if (e_ident[EI_VERSION] == EV_CURRENT)

						printf("%i (current)\n", EV_CURRENT);

				else

							printf("%i\n", e_ident[EI_VERSION]);

}



/**
 *
 *  * print_osabi - print ELF's osabi
 *
 *   * @e_ident: pointer to char array
 *
 *    */

void print_osabi(unsigned char *e_ident)

{

		printf("  OS/ABI:                            ");

			switch (e_ident[EI_OSABI])

					{

								case ELFOSABI_SYSV:

												printf("UNIX - System V\n");

															break;

i																											printf("UNIX - IRIX\n");

																																													break;

																																															case ELFOSABI_FREEBSD:

																																	
