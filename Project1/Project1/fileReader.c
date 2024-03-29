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

void fileReader(char* fileName1, char* fileName2)
{

	// create new file if it does not exist
	FILE* fpointer1;

	//open Binary file
	if ((fpointer1 = fopen(fileName1, "rb")) == NULL) {
		puts("Could not read CruiseReservationInfo.dat, new File Created!\n");
		fpointer1 = fopen(fileName1, "ab");
	}

	// error handling: if the file does not open to read, terminate the program.
	if ((fpointer1 = fopen(fileName1, "rb")) == NULL)					
	{
		puts("Error: Could not open file \"CruiseReservationInfo.dat\" to read.\n");
		exit(EXIT_FAILURE);
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

	int shipSize = sizeof(Cruise);

	while (fread(&tmp, shipSize, 1, fpointer1) == 1)
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

	//open ASCII file
	if ((fpointer1 = fopen(fileName2, "r")) == NULL) {
		puts("Could not read CruiseReservationInfo.txt, new File Created!\n");
		fpointer1 = fopen(fileName2, "a");
	}

	// error handling: if the file does not open to read, terminate the program.
	if ((fpointer1 = fopen(fileName2, "r")) == NULL)
	{
		puts("Error: Could not open file \"CruiseReservationInfo.txt\" to read.\n");
		exit(EXIT_FAILURE);
	}

	fclose(fpointer1);

	puts("File Sucessfully Read\n");
}
