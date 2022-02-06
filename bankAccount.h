#pragma once
#include <string>

using namespace std;

class bankAccount
{
public:
    void setUsername(string user);
    string getUser() const;
    void setPassword(string pass);
    string getPass() const;
    void setName(string first, string last);
    void getName();
    void setBalance(double balanceAmount);
    double getBalance() const;
    void withdraw(double amountWithdrawn);
    void deposit(double amountDeposited);
    void print() const;
    
    bankAccount();
    
protected:
    string firstName, lastName;
    string username, password; 
    double balance;

};
