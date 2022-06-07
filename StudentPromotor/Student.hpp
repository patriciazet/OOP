#pragma once
#include <string>
#include <iostream>

//forward declaration
class Student;
//class PromotorX; niepotrzebne - bo zaraz i tak deklarujemy

class Promotor
{
	Student& student; //referencja do studenta -> musimy ja ustawic w ramach konstruktura - lista inicjalizujaca
	std::string name;
public:
	Promotor(Student& student); //musimy w liscie inicjalizujacej, nie w ciele
	void setName(std::string name);
	void receiveEmail(std::string emailCopy);
};

class Student
{
	Promotor* promotor = nullptr; //wskaznik czyli po prostu adres w pamieci
	std::string name;
public:
	void setName(std::string name);
	void setPromotor(Promotor* promotor); //tu mamy wskaznik; nie moze byc referencja bo musialaby byc ustawiona w konstruktorze -> doszlibysmy do cylkicznej zaleznosci
	void sendEmailToPromotor();
};

