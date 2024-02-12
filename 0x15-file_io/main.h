#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "string.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * struct copy_struct - copy structure
 * @from: file from
 * @to: file to
 * @rd: read store
 * @wt: write store
 * @from_file: copy from
 * @to_file: paste to
 * @buffer: store
 */

typedef struct copy_struct
{
	char *from;
	char *to;
	ssize_t rd;
	ssize_t wt;
	int from_file;
	int to_file;
	char *buffer;
} copy_struct;

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif
