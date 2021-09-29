#ifndef __TAXI_DRIVER__
#define __TAXI_DRIVER__
#include <vector>
#include "DataSystem.h"

void TaxiDriver(CitywideTaxiCompany taxiCars[6])
{
	
	//Initialize all objects with information
	taxiCars[0].setTaxiID("CTC0001");
	taxiCars[0].setDriverName("Roland Sierra");
	taxiCars[0].setCarMake("Toyota");
	taxiCars[0].setCarModel("Yaris");
	taxiCars[0].setCarColor("Black");
	taxiCars[0].setLicenseNumber("V-694ZW");
	taxiCars[0].setNumberOfPassangers(0);

	taxiCars[1].setTaxiID("CTC0002");
	taxiCars[1].setDriverName("Linda Handley");
	taxiCars[1].setCarMake("Cadillac");
	taxiCars[1].setCarModel("XT4");
	taxiCars[1].setCarColor("Gray");
	taxiCars[1].setLicenseNumber("8-76030");
	taxiCars[1].setNumberOfPassangers(0);

	taxiCars[2].setTaxiID("CTC0003");
	taxiCars[2].setDriverName("Lizzie Wharton");
	taxiCars[2].setCarMake("BMW");
	taxiCars[2].setCarModel("X6");
	taxiCars[2].setCarColor("White");
	taxiCars[2].setLicenseNumber("f-724Gi");
	taxiCars[2].setNumberOfPassangers(0);
	
	taxiCars[3].setTaxiID("CTC0004");
	taxiCars[3].setDriverName("Cheryl Campbell");
	taxiCars[3].setCarMake("Subaru");
	taxiCars[3].setCarModel("WRX");
	taxiCars[3].setCarColor("Black");
	taxiCars[3].setLicenseNumber("e-4048Q");
	taxiCars[3].setNumberOfPassangers(0);

	taxiCars[4].setTaxiID("CTC0005");
	taxiCars[4].setDriverName("Cory Moreno");
	taxiCars[4].setCarMake("Nissan");
	taxiCars[4].setCarModel("Versa");
	taxiCars[4].setCarColor("Blue");
	taxiCars[4].setLicenseNumber("W-527bW");
	taxiCars[4].setNumberOfPassangers(0);

	taxiCars[5].setTaxiID("CTC0006");
	taxiCars[5].setDriverName("Oliver Wormald");
	taxiCars[5].setCarMake("Chevrolet");
	taxiCars[5].setCarModel("Suburban");
	taxiCars[5].setCarColor("White");
	taxiCars[5].setLicenseNumber("E-181bC");
	taxiCars[5].setNumberOfPassangers(0);
	
}

#endif
