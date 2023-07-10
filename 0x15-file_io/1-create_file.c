#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file.
 * @text_content: text to append to the end of the file.
 * Return: 1 if the file exists and -1 if the file does not exist.
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	int words;
	int wr;

	if (!filename)
	{
		return (-1);
	}

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (words = 0; text_content[words]; words++)

	wr = write(file_d, text_content, words);

	if (wr == -1)
	{
		return (-1);
	}

	close(file_d);

	return (1);
}
