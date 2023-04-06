// Icebox Sails
// Writes info into file function  
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"
#include "fileWriter.h"

void fileWriter(char* fileName)
{
	// write cruises into file using append mode 
	FILE* fpointer1 = fopen(fileName, "ab");

	int size = sizeof(Cruise);

	fwrite(cruises, size, NUMCRUISES, fpointer1);

	fclose(fpointer1);

	puts("\nFile Sucessfully Saved\n");
}
