#include "Student.hpp"
#include "StudentStatic.hpp"
#include <iostream>

int mainDynamic()
{
    //kompozycja
    //Student janNowak("Krolewska", 5);

    //agregacja
    Address address("Ksiazeca", 15);
    Student janNowak(address);
    Student alaNowak(address); //ala nowak mieszka pod tym samym adresem
                                //mozemy zmienic adres (L9) i obie osoby beda mieszkac pod nowym
    //tu bysmy wypisaly jana i ale i ich adresy zamieszkania
    std::cout << janNowak.getHouseNo() << std::endl;
    std::cout << alaNowak.getHouseNo() << std::endl;
    //tu zmienili numer domu w adresie
    address.setHouseNo(25);
    //tu bysmy wypisaly jana i ale i ich adresy zamieszkania
    std::cout << janNowak.getHouseNo() << std::endl;
    std::cout << alaNowak.getHouseNo() << std::endl;

    //gdyby address byl klasa:
    /*
    Address address("Krolewska", 5);
    address.getHouseNo();
    */
    return 0;
}

int main()
{
    AddressStatic address;
    address.setStreet("Krolewska");
    address.setHouseNo(15);

    StudentStatic janNowak(address);
    StudentStatic alaNowak(address);

    std::cout << "Jan " << janNowak.getHouseNo() << std::endl;
    std::cout << "Ala " << alaNowak.getHouseNo() << std::endl;

    address.setHouseNo(25);
    std::cout << "Jan " << janNowak.getHouseNo() << std::endl;
    std::cout << "Ala " << alaNowak.getHouseNo() << std::endl;

    return 0;
}