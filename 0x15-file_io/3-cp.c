#include "main.h"

/**
 * err_read - file-read error
 * @s: file where error has started
 */
void err_read(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * read_content - reads a file and puts into a buffer.
 * @s: source file
 * @buffer: pointer to buffer
 * @desc: descriptor
 * Return: Size of buffer
 */

static ssize_t read_content(char *s, char **buffer, int desc)
{
	int read_info;

	if (desc < 0)
		err_read(s);
	if (!(*buffer))
		*buffer = malloc(sizeof(char) * 1024);
	if (*buffer == NULL)
		err_read(s);
	read_info = read(desc, *buffer, 1024);
	if (read_info < 0)
	{
		free(*buffer);
		err_read(s);
	}
	return (read_info);
}
/**
 * cp_err - error handler for copy function
 * @content: source file to copy content
 * @buffer: buffer storage
 */

void cp_err(char *content, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", content);
	exit(99);
}
/**
 * cp - copies file content
 * @content: file content to copy
 * @dest: place to paste content
 * @buffer: buffer
 * @length: Info length
 */

static void cp(char *content, int dest, char *buffer, int length)
{
	if (dest < 0 || !buffer)
		cp_err(content, buffer);
	if (write(dest, buffer, length) < 0)
		cp_err(content, buffer);
}
/**
 * main - copies file
 * @ac: arguments count
 * @cd: cd[1] is copy_from, cd[2] is copy_to
 * Return: 0 for success
 */

int main(int ac, char **cd)
{
	int original, originalcopy, err, size_of_read;
	char *buffer, *copy_to, *copy_from;

	buffer = NULL;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_from = cd[1];
	copy_to = cd[2];
	original = open(copy_from, O_RDONLY);
	originalcopy = open(copy_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	for (size_of_read = 1; size_of_read > 0;)
	{
		size_of_read = read_content(copy_from, &buffer, original);
		if (!size_of_read)
			break;
		cp(copy_to, originalcopy, buffer, size_of_read);
	}
	free(buffer);
	err = close(original);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", original);
		exit(100);
	}
	err = close(originalcopy);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", originalcopy);
		exit(100);
	}
	return (0);
}
