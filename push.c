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
	int i = 0, f = 0, n;

	if (arg.data)
	{
		if (arg.data[0] == '-')
			i++;
		for (; arg.data[i] != '\0'; i++)
		{
			if (arg.data[i] > 57 || arg.data[i] < 48)
				f = 1;
		}
		if (f == 1)
			show_invalid_input_error_msg(line_number);
	}


	else
	{
		show_invalid_input_error_msg(line_number);
	}
	n = atoi(arg.data);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
