#include "monty.h"

/**
  * pop - remove an element from the top of the stack
  * @stack: pointer to the top of the stack list
  * @line_number: line number
  * Return: void
  */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (*stack == NULL)
		show_pop_error_msg(line_number);
	current = *stack;
	*stack = current->next;
	free(current);
}
