#include "Account.hpp"

std::string Account::generateBankNumber()
{
    return std::string();
}

Account::Account()
{
}

int Account::withdraw(int amount)
{
    balance -= amount;
    return 0;
}

void Account::deposit(int amount)
{
    balance += amount;
}

int Account::getBalance()
{
    return balance;
}
