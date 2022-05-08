/*
 * Kata: Remove String Spaces
 * Link: https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/cpp
*/

#include <iostream>
#include "no_space.h"

int main() {
    std::string string;
    std::cout << "Enter string to strip spaces from it: ";
    std::getline(std::cin, string);

    std::string no_space_string = no_space(string);
    std::cout << "The string with no spaces: " << no_space_string << std::endl;

    return 0;
}