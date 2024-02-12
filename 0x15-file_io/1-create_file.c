#include "main.h"
/**
 * create_file - creates a newfile
 * @filename: name of newfile to create
 * @text_content: content of the newfile to create
 * Return: 1 if successful, -1 if it failed
 */

int create_file(const char *filename, char *text_content)
{
	int newfile;

	if (filename == NULL)
	{
		return (-1);
	}
	newfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newfile == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t len = strlen(text_content);

		if (write(newfile, text_content, len) != len)
		{
			close(newfile);
			return (-1);
		}
	}
	close(newfile);
	return (1);
}
