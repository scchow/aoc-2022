#include <iostream>
#include <string>

#include "dayXXa.hpp"
#include "dayXXb.hpp"

int main(){
    auto part1 = dayXXa("../data/input.txt");
    std::cout << "Part 1: Total priority: " << part1 << "." << std::endl;

    auto part2 = dayXXb("../data/input.txt");
    std::cout << "Part 2: Total priority: " << part2 << "." << std::endl;

}