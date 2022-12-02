#include <iostream>
#include <string>

#include "day01a.hpp"
#include "day01b.hpp"

int main(){
    auto part1 = day01a("../data/input.txt");
    std::cout << "Elf " << part1.first << " has the most food with " << part1.second << " calories." << std::endl;

    auto part2 = day01b("../data/input.txt");
    std::cout << "The top 3 elves have "<< part2 << " in total calories." << std::endl;

}