#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *  to the POSIX standard output.
 *  @filename: name of the file.
 *  @letters: number of letters to read and write.
 *  Return: (0) if file cant be opened or read or file name is null.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buf;
	ssize_t br;
	ssize_t bw;

	if (filename == NULL)
	{
		return (0);
	}

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	br = read(file_d, buf, letters);
	bw = write(STDOUT_FILENO, buf, br);

	close(file_d);
	free(buf);
	return (bw);
}
