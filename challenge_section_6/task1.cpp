#include <iostream>
#include <string>

void employee_profile() {
    std::string name;
    int age;
    double hourly_wage {23.5};

    std::cin >> name >> age;
    
    std::cout << name << " " << age << " " << hourly_wage;
}

int main() {
    employee_profile();
    return 0;
}