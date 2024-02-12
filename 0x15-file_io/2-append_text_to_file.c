#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of file
 * @text_content: Null terminated string at EOF
 * Return: 1 on success else -1
 * If filename is NULL, return 1
 * If file exists return 1 and -1 if doesnt exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int num;
	int name;
	int byts;

	if (!filename)
		return (-1);

	if (!text_content || !text_content[0])
		return (1);
	name = open(filename, O_WRONLY | O_APPEND);

	if (name == -1)
		return (-1);
	for (num = 0; text_content[num];)
		num++;

	byts = write(name, text_content, num);
	if (byts == -1)
		return (-1);

	close(name);
	return (1);
}
