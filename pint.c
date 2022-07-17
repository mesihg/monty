#include "monty.h"

/**
  * pint - prints an element from the top of the stack
  * @stack: pointer to the top of the stack list
  * @line_number: line number
  * Return: void
  */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		show_pint_error_msg(line_number);
	printf("%d\n", (*stack)->n);
}
