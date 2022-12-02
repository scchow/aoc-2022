#include "day01a.hpp"

void update_top(int current_cal, int current_elf, int& most_cal, int& elf_with_most_cal){
    if (current_cal > most_cal){
        most_cal = current_cal;
        elf_with_most_cal = current_elf;
    }
}

std::pair<int, int> day01a(std::string filename){
    int most_cal = 0;
    int elf_with_most_cal = 1;

    int current_elf = 1;
    int current_cal = 0;

    std::string current_line;
    std::ifstream file(filename);

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    while (std::getline(file, current_line)){
        if (current_line == ""){
            update_top(current_cal, current_elf, most_cal, elf_with_most_cal);
            current_cal = 0;
            current_elf += 1;
        }
        else{
            current_cal += std::stoi(current_line);
        }
    }

    update_top(current_cal, current_elf, most_cal, elf_with_most_cal);

    return std::pair<int, int>{elf_with_most_cal, most_cal};

}
