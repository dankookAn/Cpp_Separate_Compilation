#include"Vehicle.h"

//디폴트생성자
Vehicle::Vehicle() : 
	manufacturerName("None Manufacturer"), numCylinders(0), owner() {}
Vehicle::Vehicle(string theManufacturerName) : 
	manufacturerName(theManufacturerName), numCylinders(0), owner() {}
Vehicle::Vehicle(string theManufacturerName, int theNumCylinders) :
	manufacturerName(theManufacturerName), numCylinders(theNumCylinders), owner() {}

//3개의 인자를갖는 생성자
Vehicle::Vehicle(string theManufacturerName, int theNumCylinders, Person theOwner) : 
	manufacturerName(theManufacturerName), numCylinders(theNumCylinders), owner(theOwner) {}

//복사생성자
Vehicle::Vehicle(const Vehicle& theObject) : 
	manufacturerName(theObject.getManufacturerName()),numCylinders(theObject.getNumCylinders()), owner(theObject.getOwner()) {}

//대입 연산자
Vehicle& Vehicle::operator=(const Vehicle& rtSide) {
	if (this == &rtSide) { return *this; }
	else {
		manufacturerName = rtSide.manufacturerName;
		numCylinders = rtSide.numCylinders;
		owner = rtSide.owner;
		return *this;
	}
}

//getter
string Vehicle::getManufacturerName()const { return manufacturerName; }
int Vehicle::getNumCylinders() const { return numCylinders; }
Person Vehicle::getOwner() const { return owner; }

