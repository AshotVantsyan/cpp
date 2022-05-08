#include "no_space.h"

std::string no_space(std::string string) {
    std::string no_space_string;
    for (int i = 0; i < string.size(); ++i) {
        if (' ' != string[i]) {
            no_space_string.push_back(string[i]);
        }
    }
    return no_space_string;
}