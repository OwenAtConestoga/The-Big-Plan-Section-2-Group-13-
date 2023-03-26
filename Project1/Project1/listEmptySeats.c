
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
#include "listEmptySeats.h"


void listEmptySeats(void) {
    extern struct Cruise* cruise; // Use external struct for the cruise

    printf("Here's the list of empty seats:\n");

    for (int i = 0; i < CAPACITY; i++) {  // Run a loop to scan through all the seats
        if (!cruise->seats[i].assigned) { // If seat is not assigned
            printf("Seat %d is available!\n", cruise->seats[i].idNumber); // Print seat number
        }
    }
}
