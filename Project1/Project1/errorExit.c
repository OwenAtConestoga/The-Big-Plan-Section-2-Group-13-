#include "errorExit.h"

void ErrorExit(char* msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(EXIT_FAILURE);
}