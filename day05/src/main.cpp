#include <iostream>
#include <string>

#include "day05a.hpp"
#include "day05b.hpp"

int main(){
    auto part1 = day05a("../data/input.txt");
    std::cout << "Part 1: " << part1 << std::endl;

    auto part2 = day05b("../data/input.txt");
    std::cout << "Part 2: " << part2 << std::endl;

}