#include "monty.h"
/**
 * f_sol - adds the top two Units.
 * @name: Bruno Owino
 * @email: brunookoth44@gmail.com
 * Return: no return
*/
void f_sol(stack_t **email, unsigned int name)
{
	stack_t *h;
	int len = 0, aux;

	h = *email;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't find solution, very short\n", name);
		fclose(bus.file);
		free(bus.content);
		free_stack(*email);
		exit(EXIT_FAILURE);
	}
	h = *email;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*email = h->next;
	free(h);
}
