#include "day06a.hpp"

int day06a(std::string msg){

    std::string substring;
    bool found_unique;

    // todo check -3
    for (int i = 0; i < msg.length()-3; ++i){
        substring = msg.substr(i, 4);

        found_unique = true;
        for (size_t j = 0; j < 4; ++j){
            for (size_t k = j+1; k < 4; ++k){
                if (substring[j] == substring[k]){
                    found_unique = false;
                    break;
                }
            }
        }
        if (found_unique){
            return i+4;
        }
        
    }

    return -1;

    // std::string current_line;
    // std::ifstream file(filename);

    // if (!file){
    //     std::cout << "File " << filename << " does not exist" << std::endl;
    // }

    // return 0;

}
