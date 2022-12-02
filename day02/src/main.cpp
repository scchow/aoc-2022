#include <iostream>
#include <string>

#include "day02a.hpp"
#include "day02b.hpp"

int main(){
    auto part1 = day02a("../data/input.txt");
    std::cout << "Part 1: Total score according to strategy guide: " << part1 << "!" << std::endl;

    auto part2 = day02b("../data/input.txt");
    std::cout << "Part 2: Total score according to strategy guide: " << part2 << "!" << std::endl;

}