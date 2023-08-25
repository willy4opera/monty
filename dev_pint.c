#include "monty.h"
/**
 * dev_pint - prints the top
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_pint(stack_t **head, unsigned int cnter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
