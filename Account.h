#include <iostream>
#include <string>


class Account {
public:
   // Account constructor with two parameters  
   Account(std::string accountName, double initialBalance)  { // assign accountName to data member name
      name = accountName;
      // validate that the initialBalance is greater than 0; if not,
      // data member balance keeps its default initial value of 0
      if (initialBalance > 0) { // if the initialBalance is valid
         balance = initialBalance; // assign it to data member balance
      }
   }
   void display(){
      std::cout<<std::endl;
      std::cout<<"The Account Info: "<<std::endl;
      std::cout<<"Account Name: "<<getName()<<std::endl;
      std::cout<<"Account Balance: "<<getBalance()<<std::endl<<std::endl;
   }

   // function that deposits (adds) only a valid amount to the balance
   void deposit(double depositAmount) {
      if (depositAmount > 0) { // if the depositAmount is valid
         balance = balance + depositAmount; // add it to the balance 
         std::cout << "Deposit "<<depositAmount<<" successful!"<<std::endl;
      }else{
         std::cout << "Deposit should be positive!"<<std::endl;
         std::cout << "Deposit failed!"<<std::endl;
      }
      display();

   }

   // function that withdraws (subtracts) only a valid amount from the balance
   void withdraw(double withdrawalAmount) {
      if ((withdrawalAmount > 0) && (balance - withdrawalAmount>0)) { // if the depositAmount is valid
         balance = balance - withdrawalAmount; // subtract it from the balance 
         std::cout << "Withdraw "<<withdrawalAmount<<" successful!"<<std::endl;
      }else{
         std::cout << "Withdraw failed!"<<std::endl;
      }
      display();
   } 

   // function returns the account balance
   double getBalance() const {
      return balance;
   }

   // function that sets the name
   void setName(std::string accountName) {
      name = accountName;
   }

   // function that returns the name
   std::string getName() const {
      return name;
   }
private:
   std::string name; // account name data member 
   double balance=0; // data member with default initial value
};


