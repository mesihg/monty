#include "monty.h"

/**
  * pchar - prints the char from the top of the stack
  * @stack: pointer to the stack list
  * @line_number: line number
  * Return: void
  */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (stack == NULL || *stack == NULL)
		pchar_empty_error_msg(line_number);

	current = *stack;
	if (current->n > 127 || current->n < 0)
	{
		pchar_range_error_msg(line_number);
	}
	printf("%c\n", current->n);
}
