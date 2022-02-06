#include "bankAccount.h"
#include "certificateOfDeposit.h"
#include <iostream>
#include <iomanip>

using namespace std;

void certificateOfDeposit::setInterestRate(double rate)
{
    interest = rate;
}

void certificateOfDeposit::setTime(double timePassed)
{
    time = timePassed;
}

void certificateOfDeposit::calculateInterest()
{
    cout << fixed << setprecision(2) << endl;
    balance = balance * (1 + (interest * time));
}

double certificateOfDeposit::getInterestRate()
{
    return interest;
}

void certificateOfDeposit::setCDMonths(int months)
{
    CDMonths = months;
}

int certificateOfDeposit::getCDMonths()
{
    return CDMonths;
}

void certificateOfDeposit::setCurrentCDMonth(int current)
{
    currentCDMonth = current;
}

int certificateOfDeposit::getCurrentCDMonth()
{
    return currentCDMonth;
}

void certificateOfDeposit::print()
{
    cout << "Account Information:" << endl;
    cout << "Account Owner Name: " << firstName << " " << lastName << endl;
    cout << "Current Balance: $" << balance << endl;
    cout << "Interest Rate: " << interest << endl;
    cout << "Current CD Month: " << currentCDMonth << endl;
    cout << "CD Months Left: " << (CDMonths - currentCDMonth) << endl;
}

certificateOfDeposit::certificateOfDeposit()
{
    time = 0;
    interest = 0;
    CDMonths = 0;
    currentCDMonth = 0;
}
