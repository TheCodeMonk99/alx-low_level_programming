#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
/**
  * read_textfile - reads text file and prints to
  * standard output
  * @filename: file being read
  * @letters: no. of letters to be read
  * Return: w - actual number of bytes read and printed
  *             0 when funcion fails or filename is NULL
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes, red;
	char *words;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	words = malloc(sizeof(char) * letters);
	red = read(fd, words, letters);
	if (red == -1)
		return (0);
	bytes = write(STDOUT_FILENO, words, red);

	free(words);
	close(fd);
	return (bytes);
}
