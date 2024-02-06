#include <iostream>

// Function Declarations
void printMenu();
int getUserOption();
void processUserOption(int userOption);
void printHelp();
void printExchangeStats();
void placeAnAsk();
void placeABid();
void printWallet();
void continueToNext();

int main() {
    while (true) {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
    return 0;
}

// Function Definitions
void printMenu() {
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
    std::cout << "7: Exit" << std::endl;
}

int getUserOption() {
    int userOption;
    std::cout << "Type in 1-7: ";
    std::cin >> userOption;
    return userOption;
}

void processUserOption(int userOption) {
    switch (userOption) {
        case 1:
            printHelp();
            break;
        case 2:
            printExchangeStats();
            break;
        case 3:
            placeAnAsk();
            break;
        case 4:
            placeABid();
            break;
        case 5:
            printWallet();
            break;
        case 6:
            continueToNext();
            break;
        case 7:
            std::cout << "Exiting program." << std::endl;
            exit(0);
        default:
            std::cout << "Invalid choice. Choose 1-7" << std::endl;
            break;
    }
}

void printHelp() {
    std::cout << "Help - your aim is to make money. Analyze the market and make bids and offers." << std::endl;
}

void printExchangeStats() {
    std::cout << "Exchange Stats - displaying current exchange statistics." << std::endl;
}

void placeAnAsk() {
    std::cout << "Place an Ask - enter your ask parameters." << std::endl;
}

void placeABid() {
    std::cout << "Place a Bid - enter your bid parameters." << std::endl;
}

void printWallet() {
    std::cout << "Wallet - displaying the contents of your wallet." << std::endl;
}

void continueToNext() {
    std::cout << "Continuing to the next phase." << std::endl;
}
