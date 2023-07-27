#include "monty.h"
#define _GNU_SOURCE

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - entry point
* @gc: 1st argument 
* @gv: 2nd argument
* Return: always 0
*/
int main(int gc, char *gv[])
{
	char *cont;
	FILE *file;
	size_t size_s = 0;
	ssize_t line_read = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (gc != 2)
	{
		fprintf(stderr, " file monty\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(gv[1], "r");
	bus.file = file;

	if (!file)
	{
		fprintf(stderr, "Error:Can't open this file %s\n", gv[1]);
		exit(EXIT_FAILURE);
	}

	while (line_read > 0)
	{
		cont = NULL;
		line_read = getline(&cont, &size_s, file);
		bus.content = cont;
		count++;

		if (line_read > 0)
			f_execute(cont, &stack, count, file);

		free(cont);
	}

	stk_free(stack);
	fclose(file);
	return (0);
}
