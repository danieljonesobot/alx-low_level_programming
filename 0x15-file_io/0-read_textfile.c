#include <stdlib.h>
#include "main.h"

/**
 * read_textfile: function that reads a txt file & prints to POSIX std output
 * @filename: is the file to read
 * @letters: number of letters to read and print
 *
 * Returns:where letters is the number of letters it should read and print
 * returns the actual number of letters it could read and print
 *
 * Returns 0 if: filename is  NULL
 *file can not be opened or read
 *write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
