#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private: 
    int accountNumber;
    double Balance;
    public:
    BankAccount(int accNum, double bal){
        accountNumber = accNum;
        Balance = bal;
    }
    void deposit(double amount){
        Balance+= amount;
    }
    void withdraw(double amount){
        if (amount<=Balance)
        {
            Balance -= amount;
        }else{
            cout<<"insufficient balance\n";
        }
        
    }

    double getBalance(){
        return Balance;
    }
};


int main(){

BankAccount myAccount(123456,500.0);
myAccount.deposit(150.0);
myAccount.withdraw(100.0);
cout<<"CurrentBalance:Rs."<<myAccount.getBalance()<<endl;

    
return 0;
}