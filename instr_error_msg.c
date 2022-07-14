#include "monty.h"

/**
 * show_instr_error_msg - prints error message for unkown instruction
 * @line_number: line number where the error occurred
 * @opt_code: name of the instruction code
 * Return: void
 */

void show_instr_error_msg(unsigned int line_number, char *opt_code)
{
	fprintf(stderr, "L%d: unkown instruction %s\n", line_number, opt_code);
	exit(EXIT_FAILURE);
}
