#include "main.h"
/**
 * create_file - create an array of chars
 * @text_content: is a string to write to the file
 * @filename: is the name of the file to create
 * Return: value
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
