#include "monty.h"

/**
 * main - entry point for the program
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	FILE *fd;
	char *optcode = NULL;
	char *line_buffer = NULL;
	size_t line_buffer_size = 0;
	unsigned int line_count = 1;

	stack_t *stack = NULL;

	if (argc != 2)
		show_usage_error_msg();

	fd = fopen(argv[1], "r");
	if (fd == NULL)
		show_file_error_msg(argv[1]);

	while ((getline(&line_buffer, &line_buffer_size, fd)) != (-1))
	{
		if (*line_buffer == '\n')
                {
			line_count++;
			continue;
		}
		optcode = strtok(line_buffer, " \t\n");

		if (!optcode && optcode[0] != '#')
		{
			line_count++;
			continue;
		}
		arg.data = strtok(NULL, " \t\n");
		opt_runner(optcode, &stack, line_count);

	}

	free(line_buffer);
	free_stack(stack);
	fclose(fd);
	exit(EXIT_SUCCESS);
}
