#include"Truck.h"

//����Ʈ ������
Truck::Truck() :Vehicle(), loadCapacity(0), towingCapacity(0) {}

//5���� ���ڸ� ���� ������
Truck::Truck(string theManufacturerName, int theNumCylinders, Person theOwner, double theLoadCapacity, int theTowingCapacity) :
	Vehicle(theManufacturerName, theNumCylinders, theOwner), loadCapacity(theLoadCapacity), towingCapacity(theTowingCapacity) {}

//���� ������
Truck::Truck(const Truck& theObject) :
	Vehicle(theObject), loadCapacity(theObject.getLoadCapacity()), towingCapacity(theObject.getTowingCapacity()) {}

//���� ������
Truck& Truck::operator=(const Truck& rtSide) {
	Vehicle::operator=(rtSide);
	if (this == &rtSide) { return *this; }
	else {
		loadCapacity = rtSide.loadCapacity;
		towingCapacity = rtSide.towingCapacity;
		return *this;
	}
}
//getter
double Truck::getLoadCapacity() const { return loadCapacity; }
int Truck::getTowingCapacity() const { return towingCapacity; }