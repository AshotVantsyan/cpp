#include <iostream>
#include <string>

void put_spaces(size_t number_of_spaces) {
    for (size_t i {0}; i < number_of_spaces; ++i) {
        std::cout << " ";
    }
}

void put_message(std::string letters) {
    std::cout << letters;
    letters.pop_back();
    std::reverse(letters.begin(), letters.end());
    std::cout << letters;
}

int main () {
    std::string letters {};
    std::cout << "Please enter letters for pyramid creation: ";
    std::getline(std::cin, letters);
    for (size_t i {1}; i <= letters.length(); ++i) {
        size_t number_of_spaces = letters.length() - i;
        put_spaces(number_of_spaces);
        put_message(letters.substr(0, i));
        put_spaces(number_of_spaces);
        std::cout << std::endl;
    }
    return 0;
}