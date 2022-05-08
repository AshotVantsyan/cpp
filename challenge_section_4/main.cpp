#include <iostream>

int main() {
    int answer;
    std::cout << "Enter your their favorite number between 1 and 100: ";
    std::cin >> answer;
    std::cout << "Amazing!! That's my favorite number too." << std::endl;
    std::cout << "No really!! " << answer << " is my favorite number." << std::endl;
    return 0;
}