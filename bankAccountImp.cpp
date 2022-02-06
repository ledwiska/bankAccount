#include "bankAccount.h"
#include <iostream>
#include <string>

using namespace std;

void bankAccount::setUsername(string user)
{
    username = user;
}

string bankAccount::getUser() const
{
    return username;
}

void bankAccount::setPassword(string pass)
{
    password = pass;
}

void bankAccount::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

void bankAccount::getName()
{
    cout << firstName << " " << lastName << endl;
}

void bankAccount::setBalance(double balanceAmount)
{
    balance = balanceAmount;
}

double bankAccount::getBalance() const
{
    return balance;
}

void bankAccount::withdraw(double amountWithdrawn)
{
    balance = balance - amountWithdrawn;
}

void bankAccount::deposit(double amountDeposited)
{
    balance = balance + amountDeposited;
}

void bankAccount::print() const
{
    cout << "Account Information: " << endl;
    cout << "Account Owner: " << firstName << " " << lastName << endl;
    cout << "Current Balance: $" << balance << endl; 
}


bankAccount::bankAccount()
{
    username = "";
    password = "";
    double balance = 0;
}
