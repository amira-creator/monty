#include "monty.h"

/**
* pall_func -  function prints all thing in stack
* @head: pointer of first node
* @coun: line counter (not used
* Return: nothing
*/
void pall_func(stack_t **hd, unsigned int coun)
{
	stack_t *h;
	(void)coun;

	h = *hd;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
* swap_func - function swaps first 2 elements of stack
* @hd: first node
* @coun: line counter
* Return: nothing
*/
void swap_func(stack_t **hd, unsigned int coun)
{
	stack_t *h;
	int len = 0, tmp;

	h = *hd;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", coun);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}
