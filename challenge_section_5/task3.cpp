#include <iostream>

void date_of_birth() {
    int m {};
    int d {};
    int y {};
    std::cin >> m >> d >> y;
    std::cout << m << " " << d << " " << y;
}

int main() {
    date_of_birth();
    return 0;
}