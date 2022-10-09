#include "main.hpp"

#include <iostream>

int main() {
    auto vector1 = new std::vector<int> {1, 2, 3, 4, 5};
    print(vector1);
    auto vector2 = new std::vector<int> {10, 20, 30};
    print(vector2);
    auto applied_vector = apply_all(vector1, vector2);
    print(applied_vector);
    delete vector1;
    delete vector2;
    delete applied_vector;
    return 0;
}

std::vector<int>* apply_all(std::vector<int>* vector1, std::vector<int>* vector2) {
    std::vector<int>* applied_vector = new std::vector<int> {};
    for (auto item1 : *vector1) {
        for (auto item2 : *vector2) {
            applied_vector->push_back(item1 * item2);
        }
    }
    return applied_vector;
}

void print(std::vector<int>* vector) {
    for (auto item : *vector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}