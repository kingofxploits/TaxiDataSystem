#ifndef __DATA_SYSTEM__
#define __DATA_SYSTEM__
#include <iostream>
#include <time.h>
class CitywideTaxiCompany
{
public:
	CitywideTaxiCompany();
	//Setters

	//Call Tracker
	void setCallTracker();
	//Taxi ID
	void setTaxiID(std::string taxi_id);
	//set driver name
	void setDriverName(std::string driver_name);
	// set car make
	void setCarMake(std::string car_make);
	// set car model
	void setCarModel(std::string car_model);
	// set car color
	void setCarColor(std::string car_color);
	// set license number
	void setLicenseNumber(std::string license);
	// number of passangers
	void setNumberOfPassangers(int number);

	//Taxi call Tracker
	int getCallTracker();
	
	//Getters

	// taxi id
	std::string getTaxiId() const;
	// driver name
	std::string getDriverName() const;
	// car make
	std::string getCarMake() const;
	// car model
	std::string getCarModel() const;
	// car color
	std::string getCarColor() const;
	// licenseNumber
	std::string getLicenseNumber() const;
	
	// number of passangers
	int getNumberOfPassangers() const;
	 // static variable (in Taxi) to accumulate the number of passengers

	static int getTotalNumberOfPassangersPerShift();
	
	//total number of passangers per shift
	static int totalNumberOfPassangers;
	
private:
	std::string taxiID{ "" };
	std::string driverName{ "" };
	std::string carMake{ "" };
	std::string carModel{ "" };
	std::string carColor{ "" };
	std::string licenseNumber{ "" };
	
	int numberOfPassangers = 0;
	int callTracker = 0;
	
}; //end class

#endif

