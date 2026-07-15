#include <iostream>
#include <string>

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

};


//CreateAccount class
void CreateAccount(BankAccount accounts[], int& currentCount){

    std::string tempName;
    std::string tempAccountNumber;
    std::string tempAccountType;
    std::string tempIdNumber;
    std::string tempDateCreated;
    std::string tempPhoneNumber;
    std::string tempAccountStatus;
    double tempBalance;

    std::cout<<"Enter Customer Full Name:"<<'\n';
    std::getline(std::cin, tempName);
    std::cout<<"Enter Account Number:"<<'\n';
    std::cin>>tempAccountNumber;
    std::cout<<"Enter Account Type (Savings/Current):"<<'\n';
    std::cin>>tempAccountType;
    std::cout<<"Enter Phone Number:"<<'\n';
    std::cin>>tempPhoneNumber;
    std::cout<<"Enter National ID Number:"<<'\n';
    std::cin>>tempIdNumber;
    std::cout<<"Enter Date Created (DD/MM/YYYY):"<<'\n';
    std::cin>>tempDateCreated;
}
//void DepositMoney(){}
//void WithdrawMoney();

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
