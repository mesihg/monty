#include "monty.h"

/**
  * swap - swaps the top two elements of the stack
  * @stack: pointer to the top of the stack list
  * @line_number: line number
  * Return: void
  */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *temp;
	int stack_size = 0, temp_num;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
		stack_size++;
	}

	if (stack_size < 2)
		show_swap_error_msg(line_number);
	temp = *stack;
	temp_num = temp->n;
	temp->n = temp->next->n;
	temp->next->n = temp_num;
}
