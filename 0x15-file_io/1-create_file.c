#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file.
 * @text_content: text to append at the end of the file.
 * Return: 1 if the file exists and -1 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	
	FILE *fp = 0;

	fp = fclose("filename", "a");

	if (fp == NULL)
	{
		return (-1);
	}

	fputs (text_content, fp);
	while ( ! feof(fp));
	rewind (fp);
	{
		text_content = getc (fp);
	}

	fclose(fp);
	return (1);
}
