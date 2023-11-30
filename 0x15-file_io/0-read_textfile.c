#include "main.h"

/**
 * read_textfile - reads a text file and
 *  prints it to the POSIX standard output.
 *  @filename: file name
 *  @letters:  number of letters it should read and print
 *
 *  Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nr, nw;
	char *b;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	nr = read(fp, b, letters);
	nw = write(STDOUT_FILENO, b, nr);

	close(fp);
	free(b);

	return (nw);
}






