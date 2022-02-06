#include "bankAccount.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"


bool highInterestSavings::noLessThanMin(double amount)
{
    if ((balance - amount) > minimumBalance)
    {
        balance = balance - amount;
        return true;
    }
    else
        return false;
}

void highInterestSavings::setMinBalance(double minimum)
{
    minimumBalance = minimum;
}
double highInterestSavings::getMinBalance()
{
    return minimumBalance;
}

highInterestSavings::highInterestSavings() : savingsAccount()
{
    minimumBalance = 0;
}
