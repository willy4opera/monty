#include "monty.h"
/**
  *dev_sub- sysmtration
  *@head: stack head
  *@cnter: line_number
  *Return: no return
 */
void dev_sub(stack_t **head, unsigned int cnter)
{
	stack_t *auxil;
	int sysm, nds;

	auxil = *head;
	for (nds = 0; auxil != NULL; nds++)
		auxil = auxil->next;
	if (nds < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	auxil = *head;
	sysm = auxil->next->n - auxil->n;
	auxil->next->n = sysm;
	*head = auxil->next;
	free(auxil);
}
