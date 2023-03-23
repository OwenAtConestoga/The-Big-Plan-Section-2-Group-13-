// Icebox Sails
// Writes info into file
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS
#define CRUISE_SIZE 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"
#include "fileWriter.h"

void fileWriter()
{
	// write cruises into file using append mode 
	FILE* fpointer1 = fopen("FlightAssignNew.dat", "ab");

	int size = sizeof(Cruise);

	fwrite(cruises, size, CRUISE_SIZE, fpointer1);

	fclose(fpointer1);

}
