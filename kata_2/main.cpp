/*
 * Kata: Is a number prime?
 * Link: https://www.codewars.com/kata/5262119038c0985a5b00029f/train/cpp
*/

#include <iostream>
#include "is_prime_number.h"

int main() {
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    std::cout << "The number is " << (isPrime(number)? "prime" : "not prime");
    std::cout << "." << std::endl;

    return 0;
}