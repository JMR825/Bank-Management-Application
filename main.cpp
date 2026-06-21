#include<iostream>
#include<string>
#include "BankAccount.h"
int main()
{
    int choice,amount;
    std::cout<<"Welcome"<<std::endl;
    
    std::cout << "1. Create Account\n";
std::cout << "2. Deposit\n";
std::cout << "3. Withdraw\n";
std::cout << "4. Check Balance\n";
std::cout << "Enter your choice: ";
std::cin>>choice;
BankAccount myAccount(101,"John",10000);
    if(choice==1)
    {
        std::cout<<"choice 1"<<std::endl;
        std::cout<<"Creating Account"<<std::endl;
    }
    if(choice==2)
    {
        std::cout<<"Enter amount to deposit: "<<std::endl;
        std::cin>>amount;
        myAccount.deposit(amount);
    }
    if(choice==3)
    {
        std::cout<<"withdraw Amount: "<<std::endl;
        std::cin>>amount;
        myAccount.withdraw(amount);
        myAccount.display();
    }
    if(choice==4)
    {
        std::cout<<"Choice 4"<<std::endl;
        std::cout<<"Display "<<std::endl;
        myAccount.display();
        myAccount.getBalance();
        myAccount.deposit(1000);
    }
    return 0;
}