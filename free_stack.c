#include "monty.h"

/**
 * free_stack - free a double linked list pointer
 * @h: pointer to head of the stack list
 */

void free_stack(stack_t *h)
{
	stack_t *temp = h;

	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
