#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: content of text
 *
 * Return: 1 if success -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;
	long int printed;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		printed = write(file, text_content, len);
		if (printed == -1)
			return (-1);
	}
	if (close(file) == -1)
		return (-1);
	return (1);
}
