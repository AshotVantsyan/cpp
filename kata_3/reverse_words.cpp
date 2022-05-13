#include <algorithm>
#include "reverse_words.h"

std::string reverse(std::string string) {
    std::string reversed {""};
    for (int i = (string.length() - 1); i >= 0; --i) {
        reversed.push_back(string[i]);
    }
    return reversed;
}

std::string reverse_words(std::string string) {
    std::string word {""};
    std::string reverse_words_string {""};
    for (int i = 0; i < string.length(); ++i) {
        if (string[i] == ' ') {
            reverse_words_string += reverse(word) + " ";
            word.clear();
        } else {
            word.push_back(string[i]);
        }
    }
    reverse_words_string += reverse(word);
    return reverse_words_string;
}