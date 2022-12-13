#include <iostream>
#include <string>

#include "day07a.hpp"
#include "day07b.hpp"

int main(){
    auto part1 = day07a("../data/input.txt");
    std::cout << "Part 1: Total priority: " << part1 << "." << std::endl;

    auto part2 = day07b("../data/input.txt");
    std::cout << "Part 2: Total priority: " << part2 << "." << std::endl;

}