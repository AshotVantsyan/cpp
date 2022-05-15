#include <iostream>

int main () {
    std::cout << "Enter an amount of cents: ";
    int cents {};
    std::cin >> cents;

    const int dollar {100};
    int dollars = cents / dollar;
    cents -= dollars * dollar;

    const int quater {25};
    int quaters = cents / quater;
    cents -= quaters * quater;

    const int dime {10};
    int dimes = cents / dime;
    cents -= dimes * dime;

    const int nickel {5};
    int nickels = cents / nickel;
    cents -= nickels * nickel;

    int pennies = cents;
    
    std::cout << dollars << " " << quaters << " " << dimes << " " << nickels << " " << pennies;

    return 0;
}