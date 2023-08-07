#include "main.h"

/**
  * create_file - creates a file
  * @filename: pointer to the name of file
  * @text_content: pointer to a string to write to the file
  *
  * Return: -1 if the function fails
  * otherwise 1
  */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*writing into the file*/
	wr = write(fd, text_content, i);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);

	return (1);
}
