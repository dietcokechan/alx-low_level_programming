#include "main.h"

/**
 * read_textfile - reads a text file and prints it to std output
 *
 * @filename:name of file
 * @letters: num of letters to read and print
 *
 * Return: actual number of letter it could read or write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, count, printed;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	count = read(file, buff, letters);
	if (count == -1)
		return (0);
	printed = write(STDOUT_FILENO, buff, count);
	if (printed == -1)
		return (0);
	if (close(file) == -1)
		return (0);
	free(buff);
	return (count);
}
