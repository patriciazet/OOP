#include "Student.hpp"

//int main()
//{
//	Promotor promotor;
//	Student dionizy(promotor); // polaczenie student->promotor
//	promotor.setStudent(dionizy); // polaczenie promotor->student
//	return 0;
//}

int main() //alternatywne podejscie
{
	Student dionizy;
	Promotor promotor(dionizy); // w konstruktorze przyjmujemy referencje (&), a wiec bedziemy na zywo podpieci do drugiego obiektu. Zmiana w jednym spowoduje zmiane w drugim

	dionizy.setPromotor(&promotor); //przekazujemy wskaznik [miejsce w pamieci] na obiekt promotor a nie sam obiekt
	dionizy.sendEmailToPromotor();
	//promotor.setStudent(dionizy);
	return 0;
}