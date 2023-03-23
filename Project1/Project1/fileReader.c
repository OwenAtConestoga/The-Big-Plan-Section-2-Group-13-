// Icebox Sails
// File read function file
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "structs.h"
#include "fileReader.h"

void fileReader()
{
	// create new file if it does not exist
	FILE* fpointer1;

	if ((fpointer1 = fopen("FlightAssignNew.dat", "rb")) == NULL) {
		printf("\nCould not read FlightAssignNew.dat, new File Created!\n");
		fpointer1 = fopen("FlightAssignNew.dat", "ab");
	}

	// assign ID number
	for (int i = 0; i < NUMCRUISES; i++)
	{
		for (int j = 0; j < CAPACITY; j++)
		{
			cruises[i].seats[j].idNumber = j;
		}
	}

	// read cruises from file 
	Cruise tmp;

	int flightSize = sizeof(Cruise);

	while (fread(&tmp, flightSize, 1, fpointer1) == 1)
	{
		int number = tmp.id;

		for (int i = 0; i < NUMCRUISES; i++)
		{
			if (cruises[i].id == number)
			{
				cruises[i] = tmp;
				break;
			}
		}
	}

	fclose(fpointer1);
}
