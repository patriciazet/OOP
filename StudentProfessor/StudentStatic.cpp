#include "StudentStatic.hpp"

void AddressStatic::setHouseNo(int houseNo)
{
	this->houseNo = houseNo;
}

int AddressStatic::getHouseNo()
{
	return houseNo;
}

void AddressStatic::setStreet(std::string street)
{
	this->street = street;
}

std::string AddressStatic::getStreet()
{
	return street;
}

StudentStatic::StudentStatic(AddressStatic address)
{
	this->address = address;

	//alternatywnie:
	//this->address.setHouseNo(address.getHouseNo());
	//this->address.setStreet(address.getStreet());
}

int StudentStatic::getHouseNo()
{
	return address.getHouseNo();
}
