#include "monty.h"
/**
 * dev_pall - prints the stack
 * @head: stack head
 * @cnter: no used
 * Return: no return
*/
void dev_pall(stack_t **head, unsigned int cnter)
{
	stack_t *hdd;
	(void)cnter;

	hdd = *head;
	if (hdd == NULL)
		return;
	while (hdd)
	{
		printf("%d\n", hdd->n);
		hdd = hdd->next;
	}
}
