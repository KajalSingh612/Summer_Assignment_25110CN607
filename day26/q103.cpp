//wap to create ATM machine simulation
#include <iostream>
int main() {
    int pin, enteredPin;
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    std::cout << "Welcome to the ATM Machine Simulation!" << std::endl;
    std::cout << "Please set your PIN: ";
    std::cin >> pin;

    std::cout << "Enter your PIN to access the ATM: ";
    std::cin >> enteredPin;

    if (enteredPin != pin) {
        std::cout << "Incorrect PIN. Access denied." << std::endl;
        return 0;
    }

    do {
        std::cout << "\nATM Menu:" << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Your current balance is: $" << balance << std::endl;
                break;
            case 2:
                std::cout << "Enter amount to deposit: $";
                std::cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    std::cout << "Deposit successful! New balance: $" << balance << std::endl;
                } else {
                    std::cout << "Invalid amount. Please try again." << std::endl;
                }
                break;
            case 3:
                std::cout << "Enter amount to withdraw: $";
                std::cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    std::cout << "Withdrawal successful! New balance: $" << balance << std::endl;
                } else {
                    std::cout << "Invalid amount or insufficient funds. Please try again." << std::endl;
                }
                break;
            case 4:
                std::cout << "Thank you for using the ATM. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}