#pragma once
#include"Vehicle.h"

class Truck :public Vehicle {
public:
	Truck();
	Truck(string theManufacturerName, int theNumCylinders, Person theOwner, double theLoadCapacity, int theTowingCapacity);
	Truck(const Truck& theObject);
	Truck& operator=(const Truck& rtSide);

	double getLoadCapacity() const;
	int getTowingCapacity() const;

private:
	double loadCapacity;
	int towingCapacity;
};