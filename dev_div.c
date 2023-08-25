#include "monty.h"
/**
 * dev_div - divides the top two elements of the stack.
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_div(stack_t **head, unsigned int cnter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", cnter);
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
	auxil = hdd->next->n / hdd->n;
	hdd->next->n = auxil;
	*head = hdd->next;
	free(hdd);
}
