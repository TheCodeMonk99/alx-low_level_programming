#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to append to the file.
 *
 * Return: If the function fails or filename is NULL -1.
 *         If the file does not exist the user lacks write permissions  -1.
 *         Otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed, wr, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[l];)
			l++;
	}

	filed = open(filename, O_WRONLY | O_APPEND);
	wr = write(filed, text_content, l);

	if (filed == -1 || wr == -1)
		return (-1);

	close(filed);

	return (1);
}
