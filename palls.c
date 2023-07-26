#include "monty.h"
/**
 * Apall - function that prints the stack
 * @hd: head of stack
 * @conter: no used
 * Return: no return
*/
void Apall(stack_t **hd, unsigned int conter)
{
	stack_t *h;
	(void)conter;

	h = *hd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
