#include "day03b.hpp"

int day03b(std::string filename){

    std::string current_line;
    std::ifstream file(filename);

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    int priority = 0;
    int current_line_len;
    int part_size;

    std::vector<std::string> group;
    std::string common_chars;

    while (std::getline(file, current_line)){

        // Add new elf to group
        group.push_back(current_line);

        // If our group is complete, compute common chars across the 3 elves
        // and add the resulting priority of the char in common
        // Note: may break if multiple common chars across the 3 elves.
        if (group.size() == 3){
            common_chars = get_common_characters(group[0], group[1]);
            common_chars = get_common_characters(common_chars, group[2]);
            priority += get_priority(common_chars);
            group.clear();
        }

    }

    return priority;

}
