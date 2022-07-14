#include "monty.h"

/**
 * show_usage_error_msg - prints error to the console
 * Return: void
 */

void show_usage_error_msg(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * show_invalid_input_error_msg - prints error if given input is invalid
 * @line_number: line number where the error occurred
 * Return: void
 */

void show_invalid_input_error_msg(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
