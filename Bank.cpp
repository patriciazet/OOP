#include <iostream>

class Bank {
	double balance = 0;
public:
	Bank(double balance) {
		this->balance = balance;
		std::cout << "ktror" << std::endl;
	}

	Bank(const Bank& old)
	{
		this->balance = old.balance;
		std::cout << "konstruktor kopiujacy" << std::endl;
	}

	~Bank() 
	{
		std::cout << "destruktor" << std::endl;
	}

	double withdraw(double amount) {
		double withdrew = amount;
		if (balance > amount) 
		{
			balance -= amount;
		}
		else 
		{
			withdrew = balance;
			balance = 0;
		}
		return withdrew;
	}

	double withdraw2(double amount) {
		if (balance >= amount) 
		{
			balance -= amount;
		}
		return balance;
	}	

	void deposit(double amount) {
		balance += amount;
	}

	double getBalance(); // deklaracja

	void setBalance(double balance) 
	{
		this->balance = balance;
	}
};

double Bank::getBalance() // definicja
{
	return balance; //return this->balance tez by zadzialalo
} 

void foo() 
{
	Bank inMethod(0);
} // tutaj poleci destruktor obiektu inMethod

int mainBank() {
	//obiekty tworzone statycznie
	Bank savingAccount(100); //konstruktor parametrowy
	Bank secondAccount(savingAccount); //konstruktor kopiujacy
	//Bank secondAccount =savingAccount; tez zadziala
	{ // lokalny blok - zeby pokazac zasieg  zmiennej another
		Bank another(secondAccount);
		foo(); // wywolanie metody zeby pokazac zasieg zmiennej wewnatrz metody
	} // tutaj poleci destruktor obiektu another

	std::cout << "dynamic object start" << std::endl;
	Bank* dynamic = new Bank(100);
	std::cout << "Some magic in between and destructor just after: " << dynamic->getBalance() << std::endl;
	//tutaj poleci destruktor obiektu utworzonego dynamicznie
	delete dynamic; // pamietamy o delete jesli uzywamy operatora new!
	std::cout << "dynamic object end" << std::endl;
	//std::cout << dynamic->getBalance(); //- nie zadziala juz!

	savingAccount.deposit(100);
	std::cout << savingAccount.getBalance() << std::endl;
	double cash = savingAccount.withdraw(50);
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
	cash = savingAccount.withdraw(100); // 50
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;

	//ten kawalek kodu jest zupelnie nieistotny, pokazuje ze zmienna 
	//ma zasieg do konca bloku a nie do jej ostatniego uzycia
	std::cout << "dodatkowy blok kodu" << std::endl;
	int x = 5;
	int w = 5 + 1;
	std::cout << "dodatkowy blok kodu" << std::endl;

	return 0;
} // destruktory obiektow statycznych w ramach tego zakresu (savingAccount i secondAccount)