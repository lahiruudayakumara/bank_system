#include <iostream>
#include <vector>
#include "BankAccount.h"

int main() {
    std::vector<BankAccount> accounts;
    int choice;

    do {
        std::cout << "\nBank System Menu:" << std::endl;
        std::cout << "1. Create Account" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Check Balance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                {
                    std::string accNumber, accHolder;
                    double initialBalance;
                    std::cout << "Enter account number: ";
                    std::cin >> accNumber;
                    std::cout << "Enter account holder's name: ";
                    std::cin >> accHolder;
                    std::cout << "Enter initial balance: $";
                    std::cin >> initialBalance;
                    BankAccount account(accNumber, accHolder, initialBalance);
                    accounts.push_back(account);
                    std::cout << "Account created successfully." << std::endl;
                }
                break;

            case 2:
                {
                    std::string accNumber;
                    double depositAmount;
                    std::cout << "Enter account number: ";
                    std::cin >> accNumber;
                    for (BankAccount& account : accounts) {
                        if (account.getAccountNumber() == accNumber) {
                            std::cout << "Enter the deposit amount: $";
                            std::cin >> depositAmount;
                            account.deposit(depositAmount);
                            std::cout << "Amount deposited." << std::endl;
                            break;
                        }
                    }
                }
                break;

            case 3:
                {
                    std::string accNumber;
                    double withdrawAmount;
                    std::cout << "Enter account number: ";
                    std::cin >> accNumber;
                    for (BankAccount& account : accounts) {
                        if (account.getAccountNumber() == accNumber) {
                            std::cout << "Enter the withdrawal amount: $";
                            std::cin >> withdrawAmount;
                            account.withdraw(withdrawAmount);
                            std::cout << "Amount withdrawn." << std::endl;
                            break;
                        }
                    }
                }
                break;

            case 4:
                {
                    std::string accNumber;
                    std::cout << "Enter account number: ";
                    std::cin >> accNumber;
                    for (const BankAccount& account : accounts) {
                        if (account.getAccountNumber() == accNumber) {
                            std::cout << "Account Holder: " << account.getAccountHolder() << std::endl;
                            std::cout << "Account Balance: $" << account.getBalance() << std::endl;
                            break;
                        }
                    }
                }
                break;

            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
    
}
