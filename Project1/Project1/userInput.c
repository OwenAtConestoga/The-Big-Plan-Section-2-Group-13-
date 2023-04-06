// Icebox Sails
// User Input funciton file
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0
#include "userInput.h"
#include <stdio.h>

// This function takes no arguments and returns a pointer to a character array
char* userInput(void)
{
	char input = getc(stdin);

	return input;
}