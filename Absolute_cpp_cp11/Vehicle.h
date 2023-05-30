#pragma once
#include"Person.h"

class Vehicle {
public:
	Vehicle();
	Vehicle(string theManufacturerName);
	Vehicle(string theManufacturerName, int theNumCylinders);
	Vehicle(string theManufacturerName, int theNumCylinders, Person theOwner);
	Vehicle(const Vehicle& theObject);
	Vehicle& operator=(const Vehicle& rtSide);

	string getManufacturerName() const;
	int getNumCylinders() const;
	Person getOwner() const;

private:
	string manufacturerName;
	int numCylinders;
	Person owner;
};