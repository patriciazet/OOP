#pragma once
#include <string>

class AddressStatic {
	std::string street;
	int houseNo;
public:
	void setHouseNo(int houseNo);
	int getHouseNo();
	void setStreet(std::string street);
	std::string getStreet();
};

struct AddressStruct
{
	std::string street;
	int houseNo;
};

class StudentStatic {
	AddressStatic address;
public:
	StudentStatic(AddressStatic address);
	int getHouseNo();
};
