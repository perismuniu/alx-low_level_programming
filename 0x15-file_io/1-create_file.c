#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file.
 * @text_content: text to append at the end of the file.
 * Return: 1 if the file exists and -1 if the file does not exist.
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	size_t length;
	size_t wr;

	if (filename == NULL)
	{
		return (-1);
	}

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);
		wr = write(file_d, text_content, length);
	if (wr == -1)
	{
		close(file_d);
		return (-1);
	}
	}
	close(file_d);

	return (1);
}
