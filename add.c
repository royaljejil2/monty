#include "monty.h"
/**
 * f_add - adds the top two elements of the stack and
 * replaces them with the result.
 * @head: pointer to the stack's head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *jes;
	int len = 0, aux;

	jes = *head;
	while (jes)
	{
		jes = jes->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	jes = *head;
	aux = jes->n + jes->next->n;
	jes->next->n = aux;
	*head = jes->next;
	free(jes);
}
