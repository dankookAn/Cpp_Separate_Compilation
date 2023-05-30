#include"Person.h"

//디폴트 생성자
Person::Person():name("None Name") {}

//인자를 갖는 생성자
Person::Person(string theName) :name(theName) {}


//복사 생성자
Person::Person(const Person& theObject): name(theObject.getName()) {}

//getter
string Person::getName() const {return name;}

//대입 연산자
Person& Person::operator=(const Person& rtSide) {
	if (this == &rtSide) { return *this; }
	else {
		name = rtSide.name;
		return *this;
	}
}

//연산자 오버로딩
ostream& operator <<(ostream& outputStream, const Person& personObject) {
	outputStream << personObject.name;
	return outputStream;
}
istream& operator >>(istream& inputStream, Person& personObject) {
	inputStream >> personObject.name;
	return inputStream;
}
