#include "monty.h"
/**
 * dev_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_pchar(stack_t **head, unsigned int cnter)
{
	stack_t *hdd;

	hdd = *head;
	if (!hdd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	if (hdd->n > 127 || hdd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hdd->n);
}
