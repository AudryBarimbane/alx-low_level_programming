#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, nlet, rw;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (nlet = 0; text_content[nlet]; nlet++)
		;

	rw = write(fp, text_content, nlet);

	if (rw == -1)
		return (-1);
	close(fp);

	return (1);
}
