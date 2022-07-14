#include "monty.h"

/**
  * pall - removes an element from the stack
  * @stack: pointer to the stack list
  * @line_number: line number for a specific instruction
  * Return: void
  */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void) line_number;

	if (*stack == NULL)
		return;

	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
