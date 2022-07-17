#include "monty.h"

/**
  * pstr - prints the string starting from the top of the stack
  * @stack: pointer to the stack list
  * @line_number: line number
  * Return: void
  */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number

	while (current != NULL)
	{

	if (current->n > 127 || current->n <= 0)
		break;
	printf("%c", current->n);
	current = current->next;
	}
	printf("\n");
}
