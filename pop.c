i#include "monty.h"

/**
 * f_pop - Removes the top element from the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 * Return: No return value.
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *jey;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	jey = *head;
	*head = jey->next;
	free(jey);
}
