#include "monty.h"

/**
 * add_func - function adds first 2 elements in stack
 * @hd: pointer to 1st node
 * @coun: line counter
 * Return: nothing
 */
void add_func(stack_t **hd, unsigned int coun)
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
		fprintf(stderr, "L%d: can't add, stack so short\n", coun);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	tmp = h->n + h->next->n;
	h->next->n = tmp;
	*hd = h->next;
	free(h);
}

/**
 * subtraction_func - function subtracts 2 elements in the stack
 * @hd: pointer of 1st  node
 * @coun: line counter
 * Return: Nothing
 */
void subtraction_func(stack_t **hd, unsigned int coun)
{
	stack_t *tp;
	int subt, node;

	tp = *hd;
	for (node = 0; tp != NULL; node++)
		tp = tp->next;

	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack very short\n", coun);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	tp = *hd;
	subt = tp->next->n - tp->n;
	tp->next->n = subt;
	*hd = tp->next;
	free(tp);
}

/**
 * multiplication_func - multiply first 2 elements of the stack
 * @head: pointer of 1st  node
 * @count: line counter
 * Return: none
 */
void multiplication_func(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int lnth = 0, mp;

	h = *hd;
	while (h)
	{
		h = h->next;
		lnth++;
	}
	if (lnth < 2)
	{
		fprintf(stderr, "L%d: can't multiply, stack short\n", count);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	mp = h->next->n * h->n;
	h->next->n = mp;
	*hd = h->next;
	free(h);
}

/**
 * divided_func - divide first 2 elements stack
 * @hd: pointer to 1st node
 * @counter: line counter
 * Return: none
 */
void divided_func(stack_t **hd, unsigned int counter)
{
	stack_t *h;
	int length = 0, tep;

	h = *hd;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't divide, stack is short\n", counter);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	tep = h->next->n / h->n;
	h->next->n = tep;
	*hd = h->next;
	free(h);
}

/**
 * modulos_func - calculate modulos of 2 elements in stack
 * @hd: pointer to 1st node
 * @count: line counter
 * Return: none
 */

void modulos_func(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int l = 0, t;

	h = *hd;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't modulos, stack short\n", count);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by 0\n", count);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	t = h->next->n % h->n;
	h->next->n = t;
	*hd = h->next;
	free(h);
}
