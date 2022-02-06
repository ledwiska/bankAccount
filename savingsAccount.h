#pragma once
#include "bankAccount.h"

class savingsAccount: public bankAccount
{
public:
    void setInterest(double interest);
    void setTime(double timeAmount);
    void calculateInterest();
    double postInterestRate();
    virtual void print();
    
    savingsAccount();
    virtual ~savingsAccount() = default;
    
protected:
    double interestRate;
    double time;
};
