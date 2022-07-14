#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <ctype.h>
#include <errno.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/stat.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct data_s - data value for the operation
 * @data: the data value
 * Description: global data structure that provide data to functions.
 */

typedef struct data_s
{
	char *data;
} data_t;

/* global variable */
data_t arg;

void show_instr_error_msg(unsigned int line_number, char *opt_code);
void show_usage_error_msg();
void show_pint_error_msg(unsigned int line_number);
void show_invalid_input_error_msg(unsigned int line_number);
void show_file_error_msg(char *file_name);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *h);
void opt_runner(char *opt_content, stack_t **stack, unsigned int line_number);

#endif