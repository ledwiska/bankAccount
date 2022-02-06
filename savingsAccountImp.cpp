#include "bankAccount.h"
#include "savingsAccount.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void savingsAccount::setInterest(double interest)
{
    interestRate = interest;
}

void savingsAccount::setTime(double timeAmount)
{
    time = timeAmount;
}

void savingsAccount::calculateInterest()
{
    cout << fixed << setprecision(2) << endl;
    balance = balance * (1 + (interestRate * time));
}

double savingsAccount::postInterestRate()
{
    return interestRate;
}
void savingsAccount::print()
{
    cout << setprecision(1) << endl;
    cout << "The interest rate is: " << interestRate << "%" <<endl;
}

savingsAccount::savingsAccount()
{
    interestRate = 0;
    time = 0;
}

