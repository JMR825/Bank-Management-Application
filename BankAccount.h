#include<iostream>
#include<string>
class BankAccount
{
    private:
    int accountNumber;
    std::string customerName;
    double balance;
    public:
    BankAccount(int nums,std::string name,int initialbalance)
    {
        accountNumber=nums;
        customerName=name;
        balance=initialbalance;
    }

void display()
{
    std::cout<<"Account Number: "<<accountNumber<<std::endl;
    std::cout<<"Customer Name: "<<customerName<<std::endl;
    std::cout<<"Balance: "<<balance<<std::endl;
}
double getBalance()
{
    return balance;
}
int getAccountNumber()
{
    return accountNumber;
}
void deposit(int amt)
{
    balance= balance+amt;
    std::cout<<"Deposited: "<<amt<<std::endl<< "New balance: " << balance<<std::endl;

}
void withdraw(int amt)
{
    if(balance>=amt)
    {
        balance-=amt;
        std::cout << "Withdrawn $" << amt << ". New balance: $" << balance << std::endl;
    }
    else
    {
        std::cout<<"Insufficient Balance "<<std::endl;
    }
}
};
