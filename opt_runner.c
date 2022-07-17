#include "monty.h"

/**
 * opt_runner - interprets the given operation code
 * @opt_content: operation content
 * @stack: pointer to the stack list
 * @line_number: line number of opt_content
 * Return: void
 */

void opt_runner(char *opt_content, stack_t **stack, unsigned int line_number)
{
	instruction_t opts[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	{"nop", nop},
	{"sub", sub},
	{"div", m_div},
	{"mul", mul},
	{"mod", mod},
	{NULL, NULL}
	};


	unsigned int i = 0;
	char *opt_code;

	opt_code = strtok(opt_content, " \t\n");
	if (opt_code && opt_code[0] == '#')
		return;
	arg.data = strtok(NULL, " \t\n");

	while (opts[i].opcode && opt_code)
	{
		if (strcmp(opts[i].opcode, opt_code) == 0)
		{
			opts[i].f(stack, line_number);
			return;
		}
		i++;
	}
	if (opt_code && opts[i].opcode == NULL)
		show_instr_error_msg(line_number, opt_code);
}
