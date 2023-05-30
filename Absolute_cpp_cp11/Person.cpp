#include"Person.h"

//����Ʈ ������
Person::Person():name("None Name") {}

//���ڸ� ���� ������
Person::Person(string theName) :name(theName) {}


//���� ������
Person::Person(const Person& theObject): name(theObject.getName()) {}

//getter
string Person::getName() const {return name;}

//���� ������
Person& Person::operator=(const Person& rtSide) {
	if (this == &rtSide) { return *this; }
	else {
		name = rtSide.name;
		return *this;
	}
}

//������ �����ε�
ostream& operator <<(ostream& outputStream, const Person& personObject) {
	outputStream << personObject.name;
	return outputStream;
}
istream& operator >>(istream& inputStream, Person& personObject) {
	inputStream >> personObject.name;
	return inputStream;
}
