#include <iostream>
#include <string>
#include <cctype>




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

        //chect accountNumber for uniqueness
        std::string getAccountNumber() const { return accountNumber; }
};

//helper functions
//void DepositMoney(){}
//void WithdrawMoney();
bool existence(BankAccount accounts[], int currentCount, std::string tatgetNumber ) {
    //ensure account doesn't already exist
    for (int i = 0; i < currentCount; i++) {
        if (accounts[i].getAccountNumber() == tatgetNumber) {
            return true;
        }
    }
    return false;
    //no match, doesn't exist so unique

}
std::string toLowerCase(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = std::tolower(str[i]);
    }
    return str;
}




//CreateAccount class
void CreateAccount(BankAccount accounts[], int& currentCount){
    // accounts[currentCount].setStatus("Active");

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


    do {
        std::cout<<"Enter Account Number:"<<'\n';
        std::cin>>tempAccountNumber;
        //verify if account is unique
        if (existence(accounts, currentCount, tempAccountNumber)) {
            std::cout<<"Account Number Exists. Please try again"<<'\n';
        }
        else {
            break;
        }

        //later add conditions to only allow proper accounts

    }while(true);




    do {
        std::cout<<"Enter Account Type (Savings/Current):"<<'\n';
        std::cin>>tempAccountType;
        //convert to lower case
        std::string lowerType = toLowerCase(tempAccountType);
        if (lowerType != "savings" && lowerType != "current") {
            std::cout<<"[ERROR] Invalid Account Type. Please try again."<<'\n';
        }
        else {
            std::cout << "success\n";
            break;

        }


    }while (true);



//add verifications for the numbers later
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

