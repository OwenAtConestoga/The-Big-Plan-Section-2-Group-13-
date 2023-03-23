#include "upperName.h"
#define MAXNAME 20

char* makeNameUpper(char flight[])
{
	char tmpname[MAXNAME];
	for (int i = 0; flight[i] != '\0'; i++)
	{
		strcpy(tmpname, flight);
		if (islower(tmpname[i]))
			flight[i] = toupper(tmpname[i]);
	}
	return flight;
}