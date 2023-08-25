#include "monty.h"
/**
 * dev_push - add node to the stack
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_push(stack_t **head, unsigned int cnter)
{
	int numx, numy = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			numy++;
		for (; bus.arg[numy] != '\0'; numy++)
		{
			if (bus.arg[numy] > 57 || bus.arg[numy] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", cnter);
			fclose(bus.file);
			free(bus.content);
			dev_fr_stck(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", cnter);
		fclose(bus.file);
		free(bus.content);
		dev_fr_stck(*head);
		exit(EXIT_FAILURE); }
	numx = atoi(bus.arg);
	if (bus.lifi == 0)
		dev_addnd(head, numx);
	else
		dev_addQ(head, numx);
}
