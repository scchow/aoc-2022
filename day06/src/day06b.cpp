#include "day06b.hpp"

int day06b(std::string msg){

    std::string substring;
    bool found_unique;

    // todo check -3
    int num_unique_chars = 14;
    for (int i = 0; i < msg.length()-num_unique_chars+1; ++i){
        substring = msg.substr(i, num_unique_chars);

        found_unique = true;
        for (size_t j = 0; j < num_unique_chars; ++j){
            for (size_t k = j+1; k < num_unique_chars; ++k){
                if (substring[j] == substring[k]){
                    found_unique = false;
                    break;
                }
            }
        }
        if (found_unique){
            return i+num_unique_chars;
        }
        
    }

    return -1;
}
