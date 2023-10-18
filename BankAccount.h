#pragma once
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

public:
    BankAccount(std::string accNumber, std::string accHolder, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
    std::string getAccountNumber();
    std::string getAccountHolder();
};
