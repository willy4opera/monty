#include "monty.h"
/**
 * dev_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_pstr(stack_t **head, unsigned int cnter)
{
	stack_t *hdd;
	(void)cnter;

	hdd = *head;
	while (hdd)
	{
		if (hdd->n > 127 || hdd->n <= 0)
		{
			break;
		}
		printf("%c", hdd->n);
		hdd = hdd->next;
	}
	printf("\n");
}
