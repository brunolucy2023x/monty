#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * creator: Bruno Owino
 * email: brunookoth44@gmail.com
 * Return: Solution
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
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
