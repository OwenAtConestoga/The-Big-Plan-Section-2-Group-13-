// Icebox Sails
// Struct Header File 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Input.h"
#include "structs.h"
#include "menuPrint.h"
#include "topLevelMenu.h"
#include "topLevelMenuInput.h"
#include "seatSelectScreen.h"
#include <stdbool.h>

#include "searchSeat.h"

#include "fileWriter.h"
#include "fileReader.h"


void numberEmptySeats(int arrayNum)
{
    // Use the external pointer to access the current cruise data.

    int emptySeats = 0;

    // Loop through each seat on the current cruise to check if it's assigned or not
    for (int i = 0; i < CAPACITY; i++)
    {
        if (cruises[arrayNum].seats[i].assigned != true) // If the seat is not assigned, add to the count of empty seats
            emptySeats++;
    }

    // Print the number of empty seats on the current cruise
    printf("There are %d empty seats on this cruise.\n\n", emptySeats);
}