#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: Number of letters it could read and print, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char buffer[1024];
	ssize_t bytes_read, bytes_written, total_written = 0;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);
	while ((bytes_read = read(file_descriptor, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

		if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
		{
			close(file_descriptor);
			return (0);
		}

		total_written += bytes_written;
		if (total_written >= (ssize_t)letters)
			break;
	}

	close(file_descriptor);
	return (total_written);
}
