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
	char *optcode;
	char *line_buffer;
	size_t line_buffer_size = 0;
	ssize_t read_line = 1;
	unsigned int line_count = 0;

	stack_t *stack = NULL;

	if (argc != 2)
		show_usage_error_msg();

	fd = fopen(argv[1], "r");
	if (fd == NULL)
		show_file_error_msg(argv[1]);

	while (read_line > 0)
	{
		line_buffer = NULL;
		read_line = getline(&line_buffer, &line_buffer_size, fd);
		line_count++;
		if (read_line > 0)
			opt_runner(line_buffer, &stack, line_count);
		free(line_buffer);

	}

	free(line_buffer);
	free_stack(stack);
	fclose(fd);
	exit(EXIT_SUCCESS);
}
