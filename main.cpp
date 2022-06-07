#include <iostream>
#include "MyClass.hpp"
#include "Shape.hpp"
#include "Account.hpp"
#include "Student.hpp"

void zad12() {
	MyClass o1, o2; // tworzymy dwa obiekty
	o1.setVariable(16); // w o1 zmieniamy wartosc, o2 zostaje domyslnie
	int value = o1.getVariable(); //pobranie wartosci
	int value2 = o2.getVariable();
	std::cout << value << " " << value2 << std::endl;

	Rectangle rect;
	rect.setDimensions(3, 7); //a co gdybysmy wymiary pobrali od uzytkownika?
	std::cout << rect.getField() << " " << rect.getCircuit() << std::endl;

	Rectangle rect2(5, 8); //z konstruktorem parametryzowanym
	std::cout << rect2.getField() << " " << rect2.getCircuit() << std::endl;
}

int main2() {
	Account prv;
	prv.deposit(150);	// 150
	//prv.deposit(-10);	// warto obsluzyc
	std::cout << prv.getBalance() << std::endl;
	int cash = prv.withdraw(100); //balance = 50, cash = 100
	std::cout << prv.getBalance() << std::endl;
	cash = prv.withdraw(100); //balance = 0, cash = 50
	std::cout << prv.getBalance() << " " << cash << std::endl;
	//prv.withdraw(-10) // warto obsluzyc
	return 0;
}

int main()
{
	Student jacek(3);
	jacek.addGrade(3);
	jacek.addGrade(4);
	jacek.addGrade(5);
	jacek.addGrade(5);
	std::cout << jacek.average() << std::endl;
	return 0;
}