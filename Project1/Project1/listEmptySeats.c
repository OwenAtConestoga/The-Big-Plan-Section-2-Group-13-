
// Icebox Sails
// Struct Header File 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#include <stdio.h>

#include "input.h"
#include "structs.h"
#include "menuPrint.h"
#include "topLevelMenu.h"
#include "topLevelMenuInput.h"
#include "seatSelectScreen.h"
#include "listEmptySeats.h"
#include <stdbool.h>


void listEmptySeats(int arrayNum) {

    printf("Here's the list of empty seats:\n");

    for (int i = 0; i < CAPACITY; i++) {  // Run a loop to scan through all the seats
        if (cruises[arrayNum].seats[i].assigned != true) { // If seat is not assigned
            printf("Seat %d is available!\n", i); // Print seat number
        }
    }
}
