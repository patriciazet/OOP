#include <string>
#include "Student.hpp"
#include <iostream>

//lista inicjalizujaca + referencja
Student::Student(Address& _address) : 
	address(_address) // -> address = _address;
{
}


int Student::getHouseNo()
{
	return address.houseNo;
}

//konstruktor z lista inicjalizujaca
Address::Address(std::string _street, int _houseNo) : 
	street(_street), 
	houseNo(_houseNo)
{
}
void Address::setHouseNo(int houseNo)
{
	this->houseNo = houseNo;
}
/**/