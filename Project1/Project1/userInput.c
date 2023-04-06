#include "userInput.h"
#include <stdio.h>

char* userInput(void)
{
	char input = getc(stdin);

	return input;
}