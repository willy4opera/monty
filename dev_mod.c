#include "monty.h"
/**
 * dev_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_mod(stack_t **head, unsigned int cnter)
{
	stack_t *hdd;
	int len = 0, auxil;

	hdd = *head;
	while (hdd)
	{
		hdd = hdd->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	hdd = *head;
	if (hdd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	auxil = hdd->next->n % hdd->n;
	hdd->next->n = auxil;
	*head = hdd->next;
	free(hdd);
}
