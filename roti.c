#include "monty.h"

/**
 * rotl_func - function rotates stack element to top
 * @hd: 1st node of stack
 * @coun: line counter
 * Return: nothing
 */
void rotl_func(stack_t **hd,  __attribute__((unused)) unsigned int coun)
{
	stack_t *tp = *hd, *ax;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	ax = (*hd)->next;
	ax->prev = NULL;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = tp;
	(*hd) = ax;
}
/**
 * rotr_func - function rotates stack element to bottom
 * @head: 1st  node of stack
 * @coun: line counter
 * Return: Nothing
 */

void rotr_func(stack_t **hd, __attribute__((unused)) unsigned int coun)
{
	stack_t *cpy;

	cpy = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *hd;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*hd)->prev = cpy;
	(*hd) = cpy;
}
