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
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(file_d, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);
	return (1);
}

