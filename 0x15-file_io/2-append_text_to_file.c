#include"main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: text to add
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, nlet, rw;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);
	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;
		rw = write(fp, text_content, nlet);

		if (rw == -1)
			return (-1);
	}
	close(fp);

	return (1);
}
