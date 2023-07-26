#include "monty.h"

/**
 * stk_free - free doubl linked list
 * @hd: first node of stack
 * Return: nothing
 */

void stk_free(stack_t *hd)
{
	stack_t *tp;

	tp = hd;
	while (hd)
	{
		tp = hd->next;
		free(hd);
		hd = tp;
	}
}
/**
 * stack_func - free stack
 * @hd: 1st node(unused)
 * @coun: line counter
 * Return: nothing
*/

void stack_func(stack_t **hd, unsigned int coun)
{
	(void)hd;
	(void)coun;

	bus.lifi = 0;
}
