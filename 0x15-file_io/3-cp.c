#include "main.h"

/**
 *main - A program that copies the content of a file to another file.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 * Return: 0 if the file is copied successfully, otherwise an error code.
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97); }
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		return (98); }

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		close(file_from);
		return (99); }

	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{	bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
			close(file_from);
			close(file_to);
			return (100); }}

	if (close(file_from) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		return (100); }
	if (close(file_to) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		return (100); }
	if (chmod(argv[2], 0644) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't set permissions %s\n", argv[2]);
		return (100); }

	return (0);
}
