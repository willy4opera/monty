#include "monty.h"
/**
* dev_exec - executes the opcode
* @stack: head linked list - stack
* @cnter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int dev_exec(char *content, stack_t **stack, unsigned int cnter, FILE *file)
{
	instruction_t opst[] = {
				{"push", dev_push}, {"pall", dev_pall}, {"pint", dev_pint},
				{"pop", dev_pop},
				{"swap", dev_swp},
				{"add", dev_add},
				{"nop", dev_nop},
				{"sub", dev_sub},
				{"div", dev_div},
				{"mul", dev_mul},
				{"mod", dev_mod},
				{"pchar", dev_pchar},
				{"pstr", dev_pstr},
				{"rotl", dev_rotl},
				{"rotr", dev_rotr},
				{"queue", dev_queue},
				{"stack", dev_stack},
				{NULL, NULL}
				};
	unsigned int xx = 0;
	char *optc;

	optc = strtok(content, " \n\t");
	if (optc && optc[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[xx].opcode && optc)
	{
		if (strcmp(optc, opst[xx].opcode) == 0)
		{	opst[xx].f(stack, cnter);
			return (0);
		}
		xx++;
	}
	if (optc && opst[xx].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", cnter, optc);
		fclose(file);
		free(content);
		dev_fr_stck(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
