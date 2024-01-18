#include "monty.h"
/**
 * f_sol - adds the top two elements of the stack.
 * @top: stack head
 * @sol: line_number
 * Return: no return
*/
void f_sol(stack_t **top, unsigned int sol)
{
	stack_t *h;
	int len = 0, aux;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't find answer too short\n", sol);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*top = h->next;
	free(h);
}
