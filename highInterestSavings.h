#pragma once
#include "bankAccount.h"
#include "savingsAccount.h"

class highInterestSavings : public savingsAccount
{
public:
    bool noLessThanMin(double amount);
    void setMinBalance(double minimum);
    double getMinBalance();
    
    highInterestSavings();
    
    virtual ~highInterestSavings() = default;
    
protected:
    double minimumBalance; 
};
