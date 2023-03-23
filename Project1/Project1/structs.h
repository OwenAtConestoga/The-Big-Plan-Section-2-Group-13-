// Icebox Sails
// Struct Header File 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#pragma once

#include <stdio.h>
#include <stdbool.h>

#define NAMESIZE 30
#define CAPACITY 20
#define NUMCRUISES 4

// create seat struct
typedef struct Seat {
	int idNumber;
	bool assigned;
	char confirmMessage[NAMESIZE];
	char lastName[NAMESIZE];
	char firstName[NAMESIZE];
}Seat;

// create cruise struct
typedef struct Cruise {
	int id;
	Seat seats[CAPACITY];
}Cruise;

// Cruise pointer 
static struct Cruise* cruise;

// cruises array size 4
extern Cruise cruises[NUMCRUISES];

