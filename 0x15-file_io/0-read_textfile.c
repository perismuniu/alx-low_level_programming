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
	FILE *fp = 0;
	ssize_t a;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen("filename", "r");

	if (fp == NULL)
	{
		return (0);
	}

	char buf[letters + 1];

	a = fread(buf, sizeof(char), letters, fp);
	if (a == 0)
	{
		fclose(fp);
		return (0);
	}

	buf[a] = '\0';


	fclose(fp);

	return (a);
}




