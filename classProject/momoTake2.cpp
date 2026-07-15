#include <iostream>
#include <string>

class MomoAccount {
    //add escapsulation to protect user details
private:
    std::string mobileNumber;
    std::string pin;
    double balance;

public:
    //creates account
    MomoAccount(std::string phone, std::string securityPin, double initialBalance) {
        mobileNumber = phone;
        pin = securityPin;
        balance = initialBalance;
    }

    bool validate(recipientNumber) {
        //will use this validate if number is accurate and in system
    }

    void transfer() {
        int network;
        //take user to new menu
        std::cout << "\n[Transfer Money Menu Selected]\n";
        std::cout<<"1) MoMo User\n ";
        std::cout<<"2) Non-MoMo User\n ";
        std::cout<<"3) Other Networks\n ";
        std::cout<<"0) Back\n ";
        std::cout<<"Enter Option: "<< '\n';
        std::cin>>network;

        switch (network) {
            case 1: {
                std::string recipientNumber;
                std:'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''[[[[[[[[[:string comfirmNumber;

                std::cout << "Enter mobile number:\n";
                std::cin>>recipientNumber;

                validat e(recipientNumber);
                if (validate(recipientNumber)) {
                    std::cout<<"Confirm mobile number:";
                    std::cin>>comfirmNumber;

                    if (recipientNumber == comfirmNumber) {
                        std::cout<<"Enter pin:";
                        //call pin from MomoAccount
                    }

                }
            }

        }

    }

    double getBalance() {
        return balance;
    }
};

int main() {
    std::string usedCode;
    int choice;
    bool running = true;
//always declare, cout and cin must be there
    //semicolons

    //prompt user for pin, *170#

     do {
         std::cout << "Enter USSD Code: "<< '\n';
         std::cin >> usedCode;

         if (usedCode != "*170#") {
             std::cout << "Invalid code. Please try again."<< '\n';
         }
     }while (usedCode != "*170#");

    //call user
    MomoAccount user1("0241112222", "1111", 500.00);

    //add while loop to avoid early termination
    while (running) {
        // add menu
        std::cout << "1) Transfer money"<< '\n';
        std::cout << "2) MomoPay&Pay Bill"<< '\n';
        std::cout << "3) Airtime & bundles"<< '\n';
        std::cout << "4) Allow cash out"<< '\n';
        std::cout << "5) Financial"<< '\n';
        std::cout << "6) My Wallet"<< '\n';
        std::cout << "0) Exit"<< '\n';
        std::cout << "#For next"<< '\n';
        //add users choice
        std::cout << "Enter option: "<< '\n';
        std::cin >> choice;

        //use switch to give user choices
        switch (choice) {
            case 1:
                user1.transfer();
                break;
            case 6:
                std::cout << "Your balance is: GHS"<<user1.getBalance()<< '\n';
                break;
            case 0:
                running = false;
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                std::cout <<"\nThis service is temporarily unavailable.";
                std::cout << "Press Enter to continue...";
                break;
            default:
                std::cout << "Invalid option."<< '\n';



        }
    }




    return 0;
}