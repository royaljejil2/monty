#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 * Return: No return value.
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *jey = *head;
	int len = 0, aux;

	while (jey)
	{
		jey = jey->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	jey = *head;
	aux = jey->n;
	jey->n = jey->next->n;
	jey->next->n = aux;
}
