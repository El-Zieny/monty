#include "header.h"
/**
 * main - check the code
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char **argv)
{
	FILE *o;
	size_t n = 0, line_n = 0;
	char line[128];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	o = fopen(argv[1], "r");
	if (!o)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, 128, o))
	{
		line_n++;
		scan_line(line, line_n);
	}
	
	fclose(o);
	return (0);
}
