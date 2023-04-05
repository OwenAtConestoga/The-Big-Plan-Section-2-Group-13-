// Icebox Sails
// List the empty seat numbers Function File 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#include <stdio.h>
#include <stdbool.h>

#include "structs.h"
#include "menuPrint.h"
#include "listEmptySeats.h"


void listEmptySeats(int arrayNum) {

    printf("Here's the list of empty seats:\n");

    for (int i = 0; i < CAPACITY; i++) {  // Run a loop to scan through all the seats
        if (cruises[arrayNum].seats[i].assigned != true) { 
            printf("Seat %d is available!\n", i + 1); // Print seat number if it is no assigned (The seat Id starts 1)
        }
    }
}
