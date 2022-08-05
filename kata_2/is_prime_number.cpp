#include <cmath>
#include "is_prime_number.hpp"

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    double sqrt = std::sqrt(number);
    for (int i {2}; i <= sqrt; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}