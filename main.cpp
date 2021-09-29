#include <iostream>
#include <fstream>
#include <iomanip>
#include "DataSystem.h"
#include "TaxiDriver.h"



/*TO DO
 
 * Write Report to file
 */
int CitywideTaxiCompany::totalNumberOfPassangers = 0;

auto writeToFile(CitywideTaxiCompany driver[]) -> void;
auto randomNumberGenerator() -> int;
auto report(CitywideTaxiCompany cars[]) -> void;
auto mostPassengers(CitywideTaxiCompany driver[]) -> CitywideTaxiCompany;
auto averagePassengerRate(CitywideTaxiCompany driver[]) -> double;



auto main() -> int{
	srand(time(nullptr)); //Seed generator
	
	CitywideTaxiCompany taxiCars[6];
	TaxiDriver(taxiCars);
	
	
	std::cout << "\t\tWelcome to CTC!\n\n";
	bool taxiNeeded;
	std::string userRequest;
	while (true) {
		do {
			taxiNeeded = false;
			std::cout << "\tDo you need a taxi?\n";
			std::cout << "\t\t\t-> ";
			std::cin >> userRequest;
			if (userRequest == "No" || userRequest == "NO" || userRequest == "N" || userRequest == "n" || userRequest == "no")
			{
				taxiNeeded = true;
			}
			if (userRequest == "Yes" || userRequest == "YES" || userRequest == "Y" || userRequest == "y" || userRequest == "yes")
			{
				
				int randomNum = (0 + rand() % 5);
				//Assign random object

				taxiCars[randomNum].setNumberOfPassangers(randomNumberGenerator());
				taxiCars[randomNum].setCallTracker(); //Track the call
				
				std::cout << "\tTaxi " << taxiCars[randomNum].getTaxiId() << " a "
					<< taxiCars[randomNum].getCarColor() << " " << taxiCars[randomNum].getCarMake() << " "
					<< taxiCars[randomNum].getCarModel() << " driven by " << taxiCars[randomNum].getDriverName() <<
					" will pick you up in a few minutes. \n\t\t(Taxi " << taxiCars[randomNum].getTaxiId() << " determined that there were "
					<< taxiCars[randomNum].getNumberOfPassangers() << " passengers)\n" << std::endl;

				break;
			}
		} while (taxiNeeded == false);
		if (taxiNeeded == true)
			break;
	}


	//Display report on screen
	
	report(taxiCars);
	std::cout << std::endl;
	
	//Create report on file
	writeToFile(taxiCars);

	//Exit with success
	return EXIT_SUCCESS;
}

auto writeToFile(CitywideTaxiCompany drivers[6]) -> void {
	const std::string fileName = "data.txt";
	std::fstream file(fileName, std::ios::out);
	if(!file.is_open()){
		std::cout << "\tCouldn't open the file!\n";
		EXIT_FAILURE;
	}
	
	if(file.is_open()){
		file << "\nCTC Taxi served a total of " << CitywideTaxiCompany::getTotalNumberOfPassangersPerShift() << " passengers today." << std::endl;
		//Display Taxi id for each driver
		for (int i{ 0 }; i < 6; i++)
		{
			file << drivers[i].getTaxiId() << "\t\t";

		}
		file << std::endl;

		//Display number of calls for each driver
		for (int i{ 0 }; i < 6; i++)
		{
			file << drivers[i].getCallTracker() << " Calls\t\t";

		}

		file << std::endl;
		file << std::endl;

		//Display number of passangers for each driver
		for (int i{ 0 }; i < 6; i++)
		{
			file << drivers[i].getNumberOfPassangers() << " Passengers\t";

		}

		//Display TaxiID with most passengers
		file << std::endl;
		file << "\nToday " << mostPassengers(drivers).getTaxiId() << " served most passengers.\n";

		//Display Average Passengers
		file << "\nToday on average each taxi served " << averagePassengerRate(drivers) << " passengers.\n";

		for (int i{ 0 }; i < 6; i++) {
			//Write to file
			file << drivers[i].getTaxiId() << "\t\t";
		}
		
	}
	file.close(); //Close file
}

auto randomNumberGenerator() -> int{
	srand(time(nullptr)); //Seed generator
	return static_cast<int>(1 + rand() % 5);
}

auto report(CitywideTaxiCompany cars[6]) -> void{
	//CitywideTaxiCompany totalPassengers;
	std::cout << "\nCTC Taxi served a total of " << CitywideTaxiCompany::getTotalNumberOfPassangersPerShift() << " passengers today." << std::endl;

	//Display Taxi id for each driver
	for (int i{ 0 }; i < 6; i++)
	{
		std::cout << cars[i].getTaxiId() << "\t\t";

	}
	std::cout << std::endl;

	//Display number of calls for each driver
	for (int i{ 0 }; i < 6; i++)
	{
		std::cout << cars[i].getCallTracker() << " Calls\t\t";

	}

	std::cout << std::endl;
	std::cout << std::endl;

	//Display number of passangers for each driver
	for (int i{ 0 }; i < 6; i++)
	{
		std::cout << cars[i].getNumberOfPassangers() << " Passengers\t";

	}

	//Display TaxiID with most passengers
	std::cout << std::endl;
	std::cout << "\nToday " << mostPassengers(cars).getTaxiId() << " served most passengers.\n";

	//Display Average Passengers
	std::cout << "\nToday on average each taxi served " << averagePassengerRate(cars) << " passengers.\n";


}

CitywideTaxiCompany mostPassengers(CitywideTaxiCompany driver[6]){
	int largest = 0;
	CitywideTaxiCompany largestObject;
	if (driver[0].getNumberOfPassangers() > largest) {
		largest = driver[0].getNumberOfPassangers();
		largestObject = driver[0];
	}
	if (driver[1].getNumberOfPassangers() > largest) {
		largest = driver[0].getNumberOfPassangers();
		largestObject = driver[1];
	}
	if (driver[2].getNumberOfPassangers() > largest) {
		largest = driver[2].getNumberOfPassangers();
		largestObject = driver[2];
	}
	if (driver[3].getNumberOfPassangers() > largest) {
		largest = driver[3].getNumberOfPassangers();
		largestObject = driver[3];
	}
	if (driver[4].getNumberOfPassangers() > largest) {
		largest = driver[4].getNumberOfPassangers();
		largestObject = driver[4];
	}
	if (driver[5].getNumberOfPassangers() > largest) {
		largest = driver[5].getNumberOfPassangers();
		largestObject = driver[5];
	}
	return largestObject;
}

auto averagePassengerRate(CitywideTaxiCompany driver[6]) -> double
{
	int drivers[6] = {};
	drivers[0] = driver[0].getNumberOfPassangers();
	drivers[1] = driver[1].getNumberOfPassangers();
	drivers[2] = driver[2].getNumberOfPassangers();
	drivers[3] = driver[3].getNumberOfPassangers();
	drivers[4] = driver[4].getNumberOfPassangers();
	drivers[5] = driver[5].getNumberOfPassangers();
	
	const double average = {
		static_cast<double>(drivers[0]) +
		static_cast<double>(drivers[1]) +
		static_cast<double>(drivers[2]) +
		static_cast<double>(drivers[3]) +
		static_cast<double>(drivers[4]) +
		static_cast<double>(drivers[5]) };

	return average / 6;
}
