//This program accessees the user's different banking accounts from their bank.
//
//  Created by Ledwiska Toribio on 2/5/22.
//
#include <iostream>
#include <string>
#include "bankAccount.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"
#include "certificateOfDeposit.h"

using namespace std;

int main() {
    bankAccount account1;
    
    //you can continue testing with more accounts!
    
    account1.setName("Fernanda", "Rosado");
    account1.setBalance(300.58);
    account1.bankAccount::print();
    cout << endl; 
 
    certificateOfDeposit account2;
    account2.setName("Paul", "Smith");
    account2.setBalance(5000.98);
    account2.setInterestRate(5.8);
    account2.setTime(2.5);
    account2.calculateInterest();
    account2.certificateOfDeposit::print();
    
    
    
    
    
    
    return 0;
}
