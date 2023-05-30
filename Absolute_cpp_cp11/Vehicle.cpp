#include"Vehicle.h"

//����Ʈ������
Vehicle::Vehicle() : 
	manufacturerName("None Manufacturer"), numCylinders(0), owner() {}
Vehicle::Vehicle(string theManufacturerName) : 
	manufacturerName(theManufacturerName), numCylinders(0), owner() {}
Vehicle::Vehicle(string theManufacturerName, int theNumCylinders) :
	manufacturerName(theManufacturerName), numCylinders(theNumCylinders), owner() {}

//3���� ���ڸ����� ������
Vehicle::Vehicle(string theManufacturerName, int theNumCylinders, Person theOwner) : 
	manufacturerName(theManufacturerName), numCylinders(theNumCylinders), owner(theOwner) {}

//���������
Vehicle::Vehicle(const Vehicle& theObject) : 
	manufacturerName(theObject.getManufacturerName()),numCylinders(theObject.getNumCylinders()), owner(theObject.getOwner()) {}

//���� ������
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

