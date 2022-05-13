#include <iostream>

int main() {
    std::cout << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl;

    int small_rooms_count;
    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> small_rooms_count;

    int large_rooms_count;
    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> large_rooms_count;

    std::cout << "Estimate for carpet cleaning service" << std::endl;

    std::cout << "Number of small rooms: " << small_rooms_count << std::endl;
    std::cout << "Number of large rooms: " << large_rooms_count << std::endl;

    const int price_per_small_room {25};
    const int price_per_large_room {35};
    std::cout << "Price per small room: $" << price_per_small_room << std::endl;
    std::cout << "Price per large room: $" << price_per_large_room << std::endl;

    const int cost = (small_rooms_count * price_per_small_room)
                     + (large_rooms_count * price_per_large_room);
    std::cout << "Cost: $" << cost << std::endl;

    const float tax_percent {0.06};
    const float tax {tax_percent * cost};
    std::cout << "Tax: $" << tax << std::endl;
    std::cout << "==========================" << std::endl;

    const float total_estimate {cost + tax};
    std::cout << "Total estimate: $" << total_estimate << std::endl;

    const int number_of_valid_days {30};
    std::cout << "This estimate is valid for " << number_of_valid_days << " days" << std::endl;

    return 0;
}