#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
//to use std::exit(0)

void TransferMoney(double& balance, std::string pin) {
    //use ampersand& operator to reference balance
    bool running = true;
    std::string transferPin;
    int network;

    std::cout<<"1) MoMo User\n ";
    std::cout<<"2) Non-MoMo User\n ";
    std::cout<<"3) Other Networks\n ";
    std::cout<<"0) Back\n ";
    std::cout<<"Enter option: ";
    std::cin>>network;

    switch (network) {
        case 1: {
            //added curly braces because I declared inside the case
            //prompt user to add recipients number
            std::string recipientNum;
            double amount;
            do {
                    std::cout <<"Please enter recipient's Number:"<<'\n';
                    std::cin>>recipientNum;

                    if (recipientNum.length()!=10 || recipientNum[0] != '0') {
                        std::cout<<"Invalid mobile number. Please try again."<<'\n';
                }
                }while (recipientNum.length()!=10 || recipientNum[0] != '0' );
            std::cout << "Enter Amount (GHS): ";
            std::cin >> amount;

            //pin verification
            do {
                std::cout << "Enter pin : ";
                std::cin >> transferPin;
                //wrong pin
                if (transferPin != pin) {
                    std::cout << "Wrong PIN! Please try again.\n\n";
                }
            }while (transferPin != pin);


            if (amount> balance) {
                std::cout << "\nTransaction Failed: Insufficient funds.\n";
                std::exit(0);
            }
            else {
                balance -= amount;

                std::cout << "\nTransaction Successful! GHS " << amount << " sent to " << recipientNum << ".\n";
                std::cout << "Current Balance:" << balance << "\n";
                std::exit(0);
            }

            }
        //added curly braces because i decalared inside case
        case 0:
            break;
        case 2:
        case 3:
            std::cout <<"\nThis service is temporarily unavailable.";
            std::cout << "Press Enter to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        default:
            std::cout << "\nInvalid choice. Please select a valid option.\n";
            std::cout << "Press Enter to continue...";
            std::cin.ignore();
            std::cin.get();
            break;

    }

}
int main(){
    std::string usedCode;
    std::string mobileNumber;
    std::string pin;
    int choice;

    double balance= 500.00;
    bool running = true;

    //welcome user
    std::cout <<"==========================================="<< '\n';
    std::cout <<"          WELCOME TO MTN MoMo"<< std::endl;
    std::cout <<"==========================================="<< '\n';

    //prompt user until they input *170#
    do {
        std::cout <<"Enter USSD Code (e.g., *170#):"<<'\n';
        std::cin>>usedCode;

        if (usedCode != "*170#") {
            std::cout<<"Invalid code. PLease try again.\n\n";
        }
    }while (usedCode != "*170#");


    //prompt user for mobile number
    do {
        std::cout <<"Please enter your Mobile Number:"<<'\n';
        std::cin>>mobileNumber;
        //should have 1 numbers and should start with 0
        if (mobileNumber.length()!=10 || mobileNumber[0] != '0') {
            std::cout<<"Invalid mobile number. PLease try again."<<'\n';
        }
    }while (mobileNumber.length()!=10 || mobileNumber[0] != '0' );


    //prompt user for pin
    do {
        std::cout <<"Enter your 4-digit PIN:"<<'\n';
        std::cin>>pin;

        //should contain numbers
        //try for loop
        if (pin.length()!=4 || !std::isdigit(pin[0]) || !std::isdigit(pin[1]) || !std::isdigit(pin[2]) || !std::isdigit(pin[3])) {
            std::cout<<"Invalid pin. PLease try again.\n\n";
        }
    }while (pin.length()!=4 || !std::isdigit(pin[0]) || !std::isdigit(pin[1]) || !std::isdigit(pin[2]) || !std::isdigit(pin[3]) );

    //success text
    std::cout <<"Authentication successful! Welcome back.\n"<<'\n';

    //declare running
    while (running) {
        // display momo menu

        std::cout << "\nMenu\n";
        std::cout << "1) Transfer Money\n";
        std::cout << "2) MoMoPay & Pay Bill\n";
        std::cout << "3) Airtime & Bundles\n";
        std::cout << "4) Allow Cash Out\n";
        std::cout << "5) Financial Services\n";
        std::cout << "6) My Wallet\n";
        std::cout << "0) Exit\n";
        std::cout << "Enter option: ";
        std::cin>>choice;

        //use switch for options

        switch (choice) {
            case 1:
                std::cout <<"\n[Transfer Money] selected\n";
                TransferMoney(balance, pin);
                break;
            case 6:
                std::cout <<"\nYour current balance is: GHS"<<balance<<'\n';
                std::cin.ignore();
                std::cin.get();

                break;
            case 0:
                std::cout <<"Y'ello! Thank you for using MTN MoMo.\n";
                running = false;
                break;

                //make these cases unavailable for now
            case 2:
            case 3:
            case 4:
            case 5:
                std::cout <<"\nThis service is temporarily unavailable.";
                std::cin.ignore();
                std::cin.get();
                break;

            default:
                std::cout << "\nInvalid choice. Please select a valid option.\n";

        }
    }



    return 0;


}

