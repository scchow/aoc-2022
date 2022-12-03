#include "day03a.hpp"

int get_priority(const std::string& str){
    int priority = 0;
    int char_ascii;
    for (auto i = 0; i < str.length(); ++i){
        char_ascii = (int) str[i];
        // Lower case letter
        // subtract 96 because a-z occupies 97-122 in ascii
        if (char_ascii > 96){
            priority += char_ascii - 96;
        }

        // Upper case letter
        // subtract 64 because A-Z occupies 65-90 in ascii
        // Add 36 because capital letters have priority 27-52
        else{
            priority += char_ascii - 64 + 26;
        }
    }
    return priority;
}

std::string get_common_characters(const std::string& part1, const std::string& part2){
    std::string common_chars = "";
    std::unordered_map<char, int> seen;
    std::unordered_map<char, int>::const_iterator iter;
    for (size_t i = 0; i < part1.length(); ++i){
        iter = seen.find(part1[i]);
        if (iter == seen.end()){
            seen[part1[i]] = 1;
        }
    }
    for (size_t i = 0; i < part2.length(); ++i){
        iter = seen.find(part2[i]);
        if (iter != seen.end()){
            if (seen[part2[i]] > 0){
                seen[part2[i]] = 0;
                common_chars += part2[i];
            }
        }
    }

    return common_chars;

}

int day03a(std::string filename){

    std::string current_line;
    std::ifstream file(filename);

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    int priority = 0;
    int current_line_len;
    int part_size;
    std::string part1, part2;
    std::string common_chars;

    while (std::getline(file, current_line)){
        part_size = current_line.length()/2;

        part1 = current_line.substr(0, part_size);
        part2 = current_line.substr(part_size, part_size);

        common_chars = get_common_characters(part1, part2);

        priority += get_priority(common_chars);

    }

    return priority;

}
