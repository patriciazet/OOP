#include "Student.hpp"

void Student::setName(std::string name)
{
	this->name = name;
}

void Student::setPromotor(Promotor* promotor)
{
	this->promotor = promotor;
}

void Student::sendEmailToPromotor()
{
	std::cout << "Student wysyla maila" << std::endl;
	promotor->receiveEmail("Witam");
}

Promotor::Promotor(Student& _student) : student(_student)
{
}

void Promotor::setName(std::string name)
{
	this->name = name;
}

void Promotor::receiveEmail(std::string emailCopy)
{
	std::cout << "Promotor odebral email" << std::endl << emailCopy << std::endl;
}
