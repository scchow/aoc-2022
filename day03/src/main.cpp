#include <iostream>
#include <string>

#include "day03a.hpp"
#include "day03b.hpp"

int main(){
    auto part1 = day03a("../data/input.txt");
    std::cout << "Part 1: Total priority: " << part1 << "." << std::endl;

    auto part2 = day03b("../data/input.txt");
    std::cout << "Part 2: Total priority: " << part2 << "." << std::endl;

}