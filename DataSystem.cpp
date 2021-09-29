#include "DataSystem.h"

#include <utility>



CitywideTaxiCompany::CitywideTaxiCompany() = default;

//Operator overloading

//add total calls and total passengers of all taxis 
CitywideTaxiCompany operator+(const CitywideTaxiCompany& other){
	return operator+(other);
}
//determine which taxi served most passengers 
bool operator > (CitywideTaxiCompany const& lhs, CitywideTaxiCompany const& rhs){
	if (lhs.getNumberOfPassangers() > rhs.getNumberOfPassangers())
		return true;
	return false;
}

//Setters


//Set call tracker

void CitywideTaxiCompany::setCallTracker(){
	this -> callTracker += 1;
}

//Taxi ID
void CitywideTaxiCompany::setTaxiID(std::string taxi_id) {
	this->taxiID = std::move(taxi_id);
}

//set driver name
void CitywideTaxiCompany::setDriverName(std::string driver_name)
{
	this->driverName = std::move(driver_name);
}

// set car make
void CitywideTaxiCompany::setCarMake(std::string car_make)
{
	this->carMake = std::move(car_make);
}

// set car model
void CitywideTaxiCompany::setCarModel(std::string car_model)
{
	this->carModel = std::move(car_model);
}

// set car color
void CitywideTaxiCompany::setCarColor(std::string car_color)
{
	this->carColor = std::move(car_color);
}

// set license number
void CitywideTaxiCompany::setLicenseNumber(std::string license)
{
	this->licenseNumber = std::move(license);
}

// number of passangers
auto CitywideTaxiCompany::setNumberOfPassangers(int number) -> void
{
	this -> numberOfPassangers += number;
	
	totalNumberOfPassangers += (numberOfPassangers);
	
}

//Getters

// taxi id
std::string CitywideTaxiCompany::getTaxiId() const
{
	return taxiID;
}

// driver name
std::string CitywideTaxiCompany::getDriverName() const
{
	return driverName;
}

// car make
std::string CitywideTaxiCompany::getCarMake() const
{
	return carMake;
}

// car model
std::string CitywideTaxiCompany::getCarModel() const
{
	return carModel;
}

// car color
std::string CitywideTaxiCompany::getCarColor() const
{
	return carColor;
}

// licenseNumber
std::string CitywideTaxiCompany::getLicenseNumber() const
{
	return licenseNumber;
}

// number of passages
int CitywideTaxiCompany::getNumberOfPassangers() const
{
	return numberOfPassangers;
}

//total number of passangers per shift
int CitywideTaxiCompany::getTotalNumberOfPassangersPerShift()
{
	return totalNumberOfPassangers;
}

int CitywideTaxiCompany::getCallTracker()
{
	return callTracker;
}
