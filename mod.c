#include "monty.h"

/**
  * mod - division remainder of the second top element to the first
  * @stack: pointer to the top of the stack list
  * @line_number: line number
  * Return: void
  */

void mod(stack_t **stack, unsigned int line_number)
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
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	temp_num = temp->next->n % temp->n;
	temp->next->n = temp_num;
	*stack = temp->next;
	free(temp);
}
