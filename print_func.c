#include "monty.h"

/**
 * print_string - print string at the top of stack
 * @hd: first node linked list
 * @coun: line counter
 * Return: nothing
 */
void print_string(stack_t **hd, unsigned int coun)
{
	stack_t *h;
	(void)coun;

	h = *hd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
/**
 * print_char - print character at top of stack
 * @hd: head of stack
 * @count: line counter
 * Return: none
 */
void print_char(stack_t **hd, unsigned int count)
{
	stack_t *h;

	h = *hd;
	if (!h)
	{
		fprintf(stderr, "L%d: stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: value not in range\n", count);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
