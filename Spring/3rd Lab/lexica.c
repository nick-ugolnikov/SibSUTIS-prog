#include "lexica.h"

FILE *file = fopen("input.xml", "rb");

void analyze(FILE *text)
{
	FILE *output = fopen("result.txt", "w");
	if (output != NULL)
	{
		char *buf = malloc(size * sizeof(char));
		if (buf != NULL)
		{
			read(text, buf, size);
			fputs(buf, output);
		}
	}
}

