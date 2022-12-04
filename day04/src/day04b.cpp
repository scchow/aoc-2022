#include "day04b.hpp"

#include "day04a.hpp"

bool overlaps(const int ranges[4]){
    // There is overlap if start of first range is within the second
    // or vice versa
    return (ranges[0] >= ranges[2] && ranges[0] <= ranges[3]) || 
           (ranges[2] >= ranges[0] && ranges[2] <= ranges[1]);   
}

int day04b(std::string filename){

    std::string current_line;
    std::ifstream file(filename);
    int ranges[4];

    int num_overlaps = 0;

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    while(std::getline(file, current_line)){
        // parse out the four numbers representing
        // start1, end1, start2, end2 of each range
        parse_line(current_line, ranges);
        // std::cout << ranges[0] << ranges[1] << ranges[2] << ranges[3] << std::endl;

        // if one sequence subsumes the other, increment our counter
        if (overlaps(ranges)){
            num_overlaps += 1;
            // std::cout << "subsumed" << std::endl;
        }
    }

    return num_overlaps;
}
