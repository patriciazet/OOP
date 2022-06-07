#pragma once
#include <string>

struct Address {
	std::string street;
	int houseNo;
	Address(std::string street, int houseNo); //
	void setHouseNo(int houseNo);
};
/*
class Address {
	std::string street;
	int houseNo;
public:
	Address(std::string street, int house);
	std::string getStreet();
	int getHouseNo();
};
*/

class Student {
	Address& address;
public:
	Student(Address& address);
	int getHouseNo();
};
