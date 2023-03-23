#define _CRT_SECURE_NO_WARNINGS

#include "errorExit.h"
#include "cruise.h"
#include "clearBuffer.h"

int main(void) {

	FILE* reservationFile;																					// file pointer
	CRUISE cruises[NUM_OF_CRUISES] = { {111, {NULL}} , {535, {NULL}} , {771, {NULL}} , {927, {NULL}} };		// four different cruises
	CRUISE tmp;																								// temporary cruise struct to read previous info
	PCRUISE cruise;																							// pointer of airplane struct
	int cruise_size = sizeof(CRUISE);
	char ch;
	for (int i = 0; i < NUM_OF_CRUISES; i++)
	{
		for (int j = 0; j < ROOMCAPACITY; j++)		//runs twelve times
		{
			cruises[i].rooms[j].idNumOfRoom = j;
			cruises[i].rooms[j].assignedRooms = false;
		}
	}

	if ((reservationFile = fopen("CruiseReservestionInfo.dat", "rb")) == NULL)		// if the "CruiseReservestionInfo.dat" file does not exist, create one.
	{
		reservationFile = fopen("CruiseReservestionInfo.dat", "wb");
		fclose(reservationFile);
	}

	if ((reservationFile = fopen("CruiseReservestionInfo.dat", "rb")) == NULL)
	{
		ErrorExit("Could not open file \"CruiseReservestionInfo.dat\" to read.\n");
	}

	// fread saved data into cruises
	while (fread(&tmp, cruise_size, 1, reservationFile) == 1)
	{
		int idNum = tmp.Id_cruise;
		for (int i = 0; i < NUM_OF_CRUISES; i++)
		{
			if (cruises[i].Id_cruise == idNum)
			{
				cruises[i] = tmp;
			}
		}
	}
	fclose(reservationFile);



	if ((reservationFile = fopen("PlainReservestionInfo.dat", "wb")) == NULL)					// open the file for write
	{
		ErrorExit("Could not open file \"PlainReservestionInfo.dat\" to write.\n");
	}

	//do
	//{
	//	TopMenu();
	//	ch = getc(stdin);
	//	ClearButter();
	//	switch (ch) {
	//	case 'a':
	//	case 'A':
	//		cruise = &cruises[0];
	//		ReservationMenu(cruise);
	//		break;

	//	case 'b':
	//	case 'B':
	//		cruise = &cruises[1];
	//		ReservationMenu(cruise);
	//		break;

	//	case 'c':
	//	case 'C':
	//		cruise = &cruises[2];
	//		ReservationMenu(cruise);
	//		break;

	//	case 'd':
	//	case 'D':
	//		cruise = &cruises[3];
	//		ReservationMenu(cruise);
	//		break;

	//	case 'e':
	//	case 'E':
	//		puts("Shutting down the program.");		//Displays a message that the program ends
	//		break;

	//	default:
	//		printf("\nInvalid option. Try again!\n");	//if a user entered not between 'a' ~ 'f' or 'A' ~ 'F', display the error msg
	//		continue;
	//	}
	//} while (ch != 'e' && ch != 'E');

	if (fwrite(cruises, cruise_size, NUM_OF_CRUISES, reservationFile) != NUM_OF_CRUISES)		// save the information
	{
		ErrorExit("Could not write to file \"CruiseReservestionInfo.dat\".\n");
	}

	fclose(reservationFile);

	puts("Have a nice day!");

	return 0;
}