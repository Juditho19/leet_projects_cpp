#include <iostream>
#include <string>


/*
 *
* ==================================================
           BANK MANAGEMENT SYSTEM
==================================================
1. Create New Account
2. Deposit Money
3. Withdraw Money
... [Other Menu Options] ...
Enter your choice (1-13): 1

--------------------------------------------------
          CREATE NEW BANK ACCOUNT
--------------------------------------------------
Enter Customer Full Name: Judith Onyejekwe
Enter Unique Account Number: ACC-8894
Enter Account Type (Savings/Current): Savings
Enter Phone Number: +233 20 123 4567
Enter National ID Number: GH-9923847-1
Enter Date Created (DD/MM/YYYY): 13/07/2026

Enter Initial Deposit Amount (Min GHS 100): 45.00
[ERROR] Initial deposit must be at least GHS 100. Please try again.

Enter Initial Deposit Amount (Min GHS 100): 150.00

--------------------------------------------------
✔ SUCCESS: Account successfully registered!
--------------------------------------------------
Account Holder  : Judith Onyejekwe
Account Number  : ACC-8894
Account Type    : Savings
Current Balance : GHS 150.00
Account Status  : Active
--------------------------------------------------

Press Enter to return to the main menu...
 */

class BankAccount {
   //declaring details
   private:
   std::string name;
   std::string accountNumber;
   std::string accountType;
   std::string idNumber;
   std::string dateCreated;
   std::string phoneNumber;
   std::string accountStatus;
   double balance;


   public:
    //include setters to access private
    void setName (std::string n) { name = n; }
    void setAccountNumber (std::string acc) { accountNumber = acc; }
    void setAccountType (std::string type) { accountType = type; }
    void setIdNumber (std::string id) { idNumber = id; }
    void setDateCreated (std::string date) { dateCreated = date; }
    void setPhoneNumber (std::string phone) { phoneNumber = phone; }
    void setAccountStatus (std::string status) { accountStatus = status; }
    void setBalance (double bal) { balance = bal; }

};




//CreateAccount class
void CreateAccount(BankAccount accounts[], int& currentCount){
    accounts[currentCount].setStatus("Active");

   std::string tempName;
   std::string tempAccountNumber;
   std::string tempAccountType;
   std::string tempIdNumber;
   std::string tempDateCreated;
   std::string tempPhoneNumber;
   std::string tempAccountStatus;
   double tempBalance;

    //include conditions for each of th inputs
   std::cout<<"Enter Customer Full Name:"<<'\n';
    std::cin.ignore();
   std::getline(std::cin, tempName);

    std::cout<<"Enter Account Number:"<<'\n';
    std::cin>>tempAccountNumber;
    //verify if account is unique
    tempAccountType.existence();



   std::cout<<"Enter Account Type (Savings/Current):"<<'\n';
   std::cin>>tempAccountType;
   std::cout<<"Enter Phone Number:"<<'\n';
   std::cin>>tempPhoneNumber;
   std::cout<<"Enter National ID Number:"<<'\n';
   std::cin>>tempIdNumber;
   std::cout<<"Enter Date Created (DD/MM/YYYY):"<<'\n';
   std::cin>>tempDateCreated;


    do {
        std::cout<<"Enter Initial deposit Amount (Min GHS 100):"<<'\n';
        std::cin>>tempBalance;

            if (tempBalance < 100) {
                std::cout << "Deposit must be at least GHS 100. Try again."<<'\n';
            }

    }while (tempBalance < 100);



}
//void DepositMoney(){}
//void WithdrawMoney();
bool existence();//create verification code

int main() {


   int option;
   BankAccount accounts[50];
   int currentCount = 0;



   // welcome page
   std::cout << "========================================================" << '\n';
   std::cout << "                BANK MANAGEMENT SYSTEM" << '\n';
   std::cout << "========================================================" << '\n';


   //use switch to create menu
   std::cout << "1) Create New Account" << "\n";
   std::cout << "2. Deposit Money" << "\n";
   std::cout << "3. Withdraw Money"  << "\n";
   std::cout << "... [Other Menu Options] ..."<< "\n";
   std::cout << "Enter your choice (1-3): "<< "\n";
   std::cin>>option;




   switch (option) {
       case 1:
           CreateAccount(accounts, currentCount);
           break;
       case 2:
           //DepositMoney();
           break;
       case 3:
           //WithdrawMoney();
           break;
       default:
           std::cout << "Invalid Choice" << "\n";


   }
   return 0;
}

