#include <iostream>
#include <string>

#include "day06a.hpp"
#include "day06b.hpp"

int main(){

    std::string filename = "../data/input.txt";

    std::string current_line;
    std::ifstream file(filename);
    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }
    std::getline(file, current_line);

    int part1 = day06a(current_line);
    std::cout << "Part 1: " << part1 << "." << std::endl;

    int part2 = day06b(current_line);
    std::cout << "Part 2: " << part2 << "." << std::endl;

}