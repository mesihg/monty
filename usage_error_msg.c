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


/**
 * show_pint_error_msg - prints error if given input is invalid
 * @line_number: line number where the error occurred
 * Return: void
 */

void show_pint_error_msg(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

/**
  * show_pop_error_msg - prints error if given input is invalid
  * @line_number: line number where the error occurred
  * Return: void
  */
void show_pop_error_msg(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}

/**
  * show_swap_error_msg - prints error if given input is invalid
  * @line_number: line number where the error occurred
  * Return: void
  */
void show_swap_error_msg(line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
