#include "main.h"

/**
 * read_textfile - reads text file and printss to POSIX std output
 * @filename: text file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 * or 0 if file cant be opened
 * or 0 if filename is NULL
 * or 0 if write fails or doesnt write expected number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int written;
	int final;
	int fileread;

	text = malloc(sizeof(char) * letters);
	if (!text)
	{
		free(text);
		return (0);
	}
	if (!filename)
		return (0);

	written = open(filename, O_RDONLY);
	if (written == -1)
	{
		return (0);
	}
	fileread = read(written, text, letters);
	final = write(STDOUT_FILENO, text, fileread);
	close(written);
	return (final);
}
