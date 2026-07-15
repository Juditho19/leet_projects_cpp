#include <iostream>
#include <string>

int main() {


/*
ATM Program


double amount
double Balance
Max_Balance per day = $500.00
service charge = 0
double suplus  ;


enter anount
if amount > Max_Balance then

display you can only withdraw 'Max_Balance' per day.


if amount > Balance then

display : insufficient funds . Do you want to withdraw anyway (Y/N)

if Y then
   service charge = 25 + amount

else  break

else if amount > 300 then
service charge = 0.04 of suplus



else if (amount <= 300 and amount >= 0) then
service charge = 0.00

else display "invalid amount".


calculate total_fee
display "the total fees is "total_fee"
end
*/

    float amountEntered;
    float accountBalance = 600.00;
    const float MAX_AMOUNT = 500.00;
    float ServiceCharge = 0;
    std::string reply;
    std::string userName;
    float totalfee;


    std::cout<<"Enter name: "<<'\n';
    std::cin>>userName;
    std::cout<<"Enter amount: "<<'\n';
    std::cin>>amountEntered;

    if (amountEntered > MAX_AMOUNT) {
        std::cout<<"You can only withdraw "<<MAX_AMOUNT <<" per day."'\n';
    }
    else if (amountEntered > accountBalance) {
        std::cout<<"insufficient funds . Do you want to withdraw anyway (Y/N)"<<'\n';
        //try adding small letters
        std::cin>>reply;

        if (reply == "Y") {
            serviceCharge = 25.00 + amountEntered;
        }
        else if (reply == "N") {
            break;
        }
        else {
            std::cout<<"Ivalid input"<<'\n';
            break;
        }
    else if (amountEntered > 300) {
        serviceCharge = 0.04 + (amountEntered - 300);
    }
    else if ( 0 <= amountEntered <= 300) {
        serviceCharge = 0.00
    }
    else {
        std::cout<<"Ivalid amount"<<'\n';
    }

    Totalfee = amountEntered * serviceCharge;
    accountBalance -= totalfee ;
    // receipt
        std::cout<<"________________________________________"<<'\n';
        std::cout<<"User name: $."<<userName<<'\n';
        std::cout<<"Amount Entered: $."<<amountEntered<<'\n';
        std::cout<<"Service charge: $."<<serviceCharge <<'\n';
        std::cout<<"Total amount withdrawn: $."<<Totalfee<<'\n';
        std::cout<<"Your account balance is: $"<<accountBalance<<'\n';
        std::cout<<"________________________________________"<< std::endl;
    }


    /*
    *



else display "invalid amount".



     */


}
