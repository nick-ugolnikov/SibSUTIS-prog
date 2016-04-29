#ifndef LEXICA
#define LEXICA

#include <stdio.h>
#include <stdlib.h>

//открывать файл как бинарный (спецификатор rb)

typedef struct
{
	int id;
	char *value;
} xml_class;

void analyze(FILE *text); // lexical analysis

long size;

#endif
