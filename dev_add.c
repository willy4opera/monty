#include "monty.h"
/**
 * dev_add - adds the top two elements of the stack.
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_add(stack_t **head, unsigned int cnter)
{
	stack_t *hdd;
	int len = 0, aux;

	hdd = *head;
	while (hdd)
	{
		hdd = hdd->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	hdd = *head;
	aux = hdd->n + hdd->next->n;
	hdd->next->n = aux;
	*head = hdd->next;
	free(hdd);
}
