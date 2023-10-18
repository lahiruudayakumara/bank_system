#include "BankAccount.h"

BankAccount::BankAccount(std::string accNumber, std::string accHolder, double initialBalance)
    : accountNumber(accNumber), accountHolder(accHolder), balance(initialBalance) {}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
    }
}

double BankAccount::getBalance() {
    return balance;
}

std::string BankAccount::getAccountNumber() {
    return accountNumber;
}

std::string BankAccount::getAccountHolder() {
    return accountHolder;
}
