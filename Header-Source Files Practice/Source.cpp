#include <iostream>
#include <string>
#include "ShippingEquipment.h"
#include "SetupArea.h"

using namespace std;

int main()
{
	//Title of the program
	cout << "\n\n\t\t **** Corona Virus Tips and Tricks ****\n\n";
	
	SetupALockdownArea();
	SetupATestingStation();
	SetupAQuarantineArea();
	SetupFemaHospital();
	ShipMasksToHospital();
	ShipFaceShieldsToHospital();
	ShipVentsToHospital();

	return 0;
}