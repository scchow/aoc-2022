#include "day04a.hpp"

bool subsumes(const int ranges[4]){
    return ((ranges[0] <= ranges[2]) && (ranges[1] >= ranges[3])) ||
        ((ranges[2] <= ranges[0]) && (ranges[3] >= ranges[1]));
}

void parse_line(std::string line, int* ranges){

    std::string current_str = "";

    size_t current_ind = 0;

    for (auto i=0; i < line.length(); ++i){
        if ((line[i] == ',') || (line[i] == '-')){
            ranges[current_ind] = std::stoi(current_str);
            current_str = "";
            current_ind += 1;
        }
        else{
            current_str += line[i];
        }
    }
    ranges[current_ind] = std::stoi(current_str);
}


int day04a(std::string filename){

    std::string current_line;
    std::ifstream file(filename);
    int ranges[4];

    int subsuming_pairs = 0;

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    while(std::getline(file, current_line)){
        // parse out the four numbers representing
        // start1, end1, start2, end2 of each range
        parse_line(current_line, ranges);
        // std::cout << ranges[0] << ranges[1] << ranges[2] << ranges[3] << std::endl;

        // if one sequence subsumes the other, increment our counter
        if (subsumes(ranges)){
            subsuming_pairs += 1;
            // std::cout << "subsumed" << std::endl;
        }
    }

    return subsuming_pairs;

}
