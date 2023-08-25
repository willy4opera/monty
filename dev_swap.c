#include "monty.h"
/**
 * dev_swp - adds the top two elements of the stack.
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_swp(stack_t **head, unsigned int cnter)
{
	stack_t *hdd;
	int leng = 0, auxil;

	hdd = *head;
	while (hdd)
	{
		hdd = hdd->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	hdd = *head;
	auxil = hdd->n;
	hdd->n = hdd->next->n;
	hdd->next->n = auxil;
}
