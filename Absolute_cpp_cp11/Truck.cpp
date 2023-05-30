#include"Truck.h"

//디폴트 생성자
Truck::Truck() :Vehicle(), loadCapacity(0), towingCapacity(0) {}

//5개의 인자를 갖는 생성자
Truck::Truck(string theManufacturerName, int theNumCylinders, Person theOwner, double theLoadCapacity, int theTowingCapacity) :
	Vehicle(theManufacturerName, theNumCylinders, theOwner), loadCapacity(theLoadCapacity), towingCapacity(theTowingCapacity) {}

//복사 생성자
Truck::Truck(const Truck& theObject) :
	Vehicle(theObject), loadCapacity(theObject.getLoadCapacity()), towingCapacity(theObject.getTowingCapacity()) {}

//대입 연산자
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