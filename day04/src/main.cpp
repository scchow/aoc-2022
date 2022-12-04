#include <iostream>
#include <string>

#include "day04a.hpp"
#include "day04b.hpp"

int main(){
    auto part1 = day04a("../data/input.txt");
    std::cout << "Part 1: Number of subsuming pairs: " << part1 << "." << std::endl;

    auto part2 = day04b("../data/input.txt");
    std::cout << "Part 2: Number of overlapping pairs: " << part2 << "." << std::endl;

}