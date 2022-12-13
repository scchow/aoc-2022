#include "day07b.hpp"

int day07b(std::string filename){

    std::string current_line;
    std::ifstream file(filename);

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    while (std::getline(file, current_line)){

    }

    return 0;

}
