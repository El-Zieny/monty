#include "header.h"
/**
 * scan_line - examine the given string for opcode
 * @str: the str to be examined
 */
void scan_line(char *line, unsigned int line_n)
{
	int x;
	char *token;
	instruction_t functions[] = {
		{"push", NULL},
		{"pall", NULL},
		{NULL, NULL}
	};

	token = strtok(line, " \n");
	for (x = 0; functions[x].opcode; x++)
	{
		if (!strcmp(token, functions[x].opcode))
		{
			printf("true\n");
		/*	functions[x].f;*/
			return;
		}
	}
	printf("L%i: unknown instruction %s\n", line_n, token);
	exit(EXIT_FAILURE);
}
