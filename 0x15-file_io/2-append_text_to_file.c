#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails or filename is NULL  -1.
 *         If file doesn't exist or user doesn't have write permissions -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, n);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
