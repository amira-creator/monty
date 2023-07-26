#include "monty.h"
/**
* stack_f - frees a doubly linked list
* @h: head of the stack
*/
void stack_f(stack_t *h)
{
	stack_t *ax;

	ax = h;
	while (h)
	{
		ax = h->next;
		free(h);
		h = ax;
	}
}
