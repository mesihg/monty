#include "monty.h"

/**
 * pchar_range_error_msg - prints error to the console
 * @line_number:  line number where the error occurred
 * Return: void
 */

void pchar_range_error_msg(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n");
	exit(EXIT_FAILURE);
}

/**
 * pchar_empty_error_msg - prints error to the console
 * @line_number: line number where the error occurred
 * Return: void
 */

void pchar_empty_error_msg(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

