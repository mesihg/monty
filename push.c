#include "monty.h"

/**
 * push - pushes an element to the stack list
 * @stack: pointer to the stack list
 * @line_number: line number for a specific instruction
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	char *val = arg.data;
	int i, data;

	if (!val)
	{
		 show_invalid_input_error_msg(line_number);
	}

	for (i = 0; val[i] != '\0'; i++)
	{
		if (!isdigit(val[i]) && val[i] != '-')
			 show_invalid_input_error_msg(line_number);
	}
	data = atoi(val);
	new_node = (stack_t *)malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
