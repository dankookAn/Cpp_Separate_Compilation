#include<iostream>
#include<stdio.h>
#include"Person.h"
#include"Vehicle.h"
#include"Truck.h"


using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

int main() {
	

	cout << "The test for Person class" << endl;
	Person p1;
	Person p2("Brian");
	//Test for default constructor and getter
	cout << "(p1.getName()) p1 get name : " << p1.getName() << endl;
	//Test for << overloading
	cout << "(cout << p2) p2 name : " << p2 << endl;
	//Test for >> overloading 
	cout << "Enter name : ";
	cin >> p1;
	cout << "(cin >> p1) Changed p1 name : " << p1 << endl;
	//Test for copy constructor
	Person p3(p2);
	cout << "(Person p3(p2)) p3 name : " << p3 << endl;
	//Test for assignment operator =
	p1 = p2;
	cout << "(p1 = p2) Changed p1 name : " << p1 << endl;


	cout << endl <<"The test for Vehicle class" << endl;
	Vehicle v1;
	Vehicle v2("Car", 3, p1);
	//Test for default constructor and getter
	cout << "(v1.getter) ManufacturerName : " << v1.getManufacturerName() << ", NumCylinders : " << v1.getNumCylinders() << ", Owner : " << v1.getOwner() << endl;
	//Test for copy constructor
	Vehicle v3(v2);
	cout << "(Vehicle v3(v2)) v3 name : " << v3.getManufacturerName() << ", NumCylinders : " << v3.getNumCylinders() << ", Owner : " << v3.getOwner() << endl;
	//Test for assignment operator =
	v1 = v2;
	cout << "(v1 = v2) Changed v1 name : " << v1.getManufacturerName() << ", NumCylinders : " << v1.getNumCylinders() << ", Owner : " << v1.getOwner() << endl;


	cout << endl << "The test for Truck class" << endl;
	Truck t1;
	Truck t2("Truck", 5, p2, 100, 200);
	//Test for default constructor and getter
	cout << "(t1.getter) ManufacturerName : " << t1.getManufacturerName() << ", NumCylinders : " << t1.getNumCylinders() << ", Owner : " << t1.getOwner() <<
		", LoadCapacity : " << t1.getLoadCapacity() << ", TowingCapacity : " << t1.getTowingCapacity() << endl;
	//Test for copy constructor
	Truck t3(t2);
	cout << "(Truck t3(t2)) t3 name : " << t3.getManufacturerName() << ", NumCylinders : " << t3.getNumCylinders() << ", Owner : " << t3.getOwner() <<
		", LoadCapacity : " << t3.getLoadCapacity() << ", TowingCapacity : " << t3.getTowingCapacity() << endl;
	//Test for assignment operator =
	t1 = t2;
	cout << "(t1 = t2) Changed t1 name : " << t1.getManufacturerName() << ", NumCylinders : " << t1.getNumCylinders() << ", Owner : " << t1.getOwner() <<
		", LoadCapacity : " << t1.getLoadCapacity() << ", TowingCapacity : " << t1.getTowingCapacity() << endl;

	system("pause");
	return 0;
}