#include "monty.h"

/**
 * opt_runner - interprets the given operation code
 * @opt_code: operation code
 * @stack: pointer to the stack list
 * @line_number: line number of opt_content
 * Return: void
 */

void opt_runner(char *opt_code, stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t opts[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	{NULL, NULL}
	};


	for (i = 0; opts[i].opcode != NULL; i++)
	{
		if (strcmp(opts[i].opcode, opt_code) == 0)
		{
			opts[i].f(stack, line_number);
			return;
		}
	}
	show_instr_error_msg(line_number, opt_code);
}
