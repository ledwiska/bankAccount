#pragma once
#include "bankAccount.h"

class certificateOfDeposit : public bankAccount
{
public:
    void setInterestRate(double rate);
    void setTime(double timePassed);
    void calculateInterest();
    double getInterestRate();
    void setCDMonths(int months);
    int getCDMonths();
    void setCurrentCDMonth(int current);
    int getCurrentCDMonth();
    void print();
    
    certificateOfDeposit();
    
    virtual ~certificateOfDeposit() = default;
    
protected:
    double time;
    double interest;
    int CDMonths;
    int currentCDMonth; 
};
