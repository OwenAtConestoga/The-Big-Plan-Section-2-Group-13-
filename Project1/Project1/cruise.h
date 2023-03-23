#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAXNAME 20
#define ROOMCAPACITY 50
#define NUM_OF_CRUISES 4

typedef struct information {
	int idNumOfRoom;
	bool assignedRooms;
	bool confirmation;
	char firstName[MAXNAME];
	char lastName[MAXNAME];
}INFO, * PINFO;

typedef struct cruise {
	int Id_cruise;
	INFO rooms[ROOMCAPACITY];
}CRUISE, * PCRUISE;