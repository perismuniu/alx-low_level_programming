#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file.
 * @text_content: text to append at the end of the file.
 * Return: 1 if the file exists and -1 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = NULL;
	size_t length;
	size_t wr;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "w");

	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);
		wr = fwrite(text_content, 1, length, fp);
	if (wr != length)
	{
		fclose(fp);
		return (1);
	}
	}

	fclose(fp);
	return (1);
}
