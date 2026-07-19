#include <iostream>

class BankAccount
{
private:
    std::string NAME;
    int ACCOUNT_NUMBER = 1014;
    double BALANCE;

public:
    enum Status
    {
        ACTIVE,
        BLOCKED
    };

    Status status;

    BankAccount()
    {
        NAME = "";
        ACCOUNT_NUMBER = 0;
        BALANCE = 0;
        status = ACTIVE;
    }

    BankAccount(std::string name, double balance)
    {
        NAME = name;
        BALANCE = balance;
        ACCOUNT_NUMBER = 1000;
        status = ACTIVE;
    }

    void display()
    {
        std::cout << "Name: " << NAME << std::endl;
        std::cout << "Account Number: " << ACCOUNT_NUMBER << std::endl;
        std::cout << "Balance: " << BALANCE << std::endl;
        std::cout << "Status: " << (status == ACTIVE ? "Active" : "Blocked") << std::endl;
    }

    void deposit(double amount)
    {
        if (status == BLOCKED)
        {
            std::cout << "Deposit failed. Blocked Account\n";
            return;
        }

        if (amount > 0)
        {
            BALANCE = BALANCE + amount;
            std::cout << "Deposit successful";
        }
        else
        {
            std::cout << "Amount should be greater than 0 \n";
        }
    }

    void withdraw(double amount)
    {
        if (status == BLOCKED)
        {
            std::cout << "Withdrawal failed \n";
            return;
        }

        if (amount > 0 && amount < BALANCE)
        {
            BALANCE -= amount;
            std::cout << "Withdrawal sucessful\n";
        }
        else if ((BALANCE - amount) < 50)
        {
            std::cout << "Cannot withdraw. Minimum must be 50";
        }
        else
        {
            std::cout << "withdrawal unsucessful\n";
        }
    }

    double getBalance()
    {
        return BALANCE;
    }

    std::string setName(std::string name1)
    {
        NAME = name1;

        return NAME;
    }

    void blockedAccount()
    {
        status = BLOCKED;
    }
};

int main()
{
    BankAccount Account[50];
    int count = 0;

    // let me create one account and see
    Account[count] = BankAccount("senate", 530);
    count++;

    Account[0].deposit(200);

    for (int i = 0; i < count; i++)
    {
        Account[i].display();
    }

    BankAccount user1("Respect", 500);
    BankAccount user2("Jason", 200);
    user1.display();
    user2.display();

    std::cout << "\n";

    std::cout << user1.getBalance() << std::endl;
    std::cout << user2.setName("Respect");
    return 0;
}
