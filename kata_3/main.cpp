/*
 * Kata: Reverse words
 * Link: https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
*/

#include <iostream>
#include "reverse_words.h"

int main() {
    std::string string;
    std::cout << "Enter string for reserving words in it: ";
    std::getline(std::cin, string);
    std::cout << reverse_words(string) << std::endl;
    return 0;
}