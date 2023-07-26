#include "monty.h"

/**
 * pop_func - function prints top node in stack
 * @hd: pointer of first node
 * @coun: line counter
 * Return: nothing
 */

void pop_func(stack_t **hd, unsigned int coun)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", coun);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}

	h = *hd;
	*hd = h->next;
	free(h);
}

/**
 * pint_func - function prints top node in stack
 * @hd: pointer of first node
 * @coun: line counter
 * Return: nothing
 */
void pint_func(stack_t **hd, unsigned int coun)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u:stack empty,cannot print\n", coun);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*hd)->n);
}
/**
 * nop_func - function does nothing
 * @head: of first node
 * @counter: line counter
 *
 * Return: none
 */

void nop_func(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
