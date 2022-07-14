#include "monty.h"

/**
 * show_file_error_msg - prints error message when file can not be open
 * @file_name: name of the file
 * Return: void
 */

void show_file_error_msg(char *file_name)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_name);
	exit(EXIT_FAILURE);
}
