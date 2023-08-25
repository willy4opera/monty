#include "monty.h"
/**
 * dev_pop - prints the top
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_pop(stack_t **head, unsigned int cnter)
{
	stack_t *hdd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	hdd = *head;
	*head = hdd->next;
	free(hdd);
}
