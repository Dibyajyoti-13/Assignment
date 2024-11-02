#include <iostream>
#include <stdexcept>

class InsufficientFundsException : public std::runtime_error {
public:
    InsufficientFundsException() 
        : std::runtime_error("Error: Insufficient funds for this withdrawal.") {}
};

class InvalidAmountException : public std::runtime_error {
public:
    InvalidAmountException() 
        : std::runtime_error("Error: Withdrawal amount must be positive.") {}
};

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {
        if (balance < 0) {
            throw std::invalid_argument("Initial balance cannot be negative.");
        }
    }

    void withdraw(double amount) {
        if (amount < 0) {
            throw InvalidAmountException();
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    try {
        int n;
        std::cout<<"Enter Balance: ";
        std::cin>>n;
        BankAccount account(n);

        double withdrawalAmount;
        std::cout << "Balance: " << account.getBalance() << "\n";
        std::cout << "Withdrawal: ";
        std::cin >> withdrawalAmount;

        account.withdraw(withdrawalAmount);
        std::cout << "Withdrawal successful. New balance: " << account.getBalance() << "\n";
    } catch (const InsufficientFundsException& e) {
        std::cerr << e.what() << "\n";
    } catch (const InvalidAmountException& e) {
        std::cerr << e.what() << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
