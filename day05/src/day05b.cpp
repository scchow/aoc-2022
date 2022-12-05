#include "day05b.hpp"

std::string day05b(std::string filename){

    std::string current_line;
    std::ifstream file(filename);

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    std::vector<std::string> stacks_state_str;
    bool reading_stacks_state = true;
    std::vector<std::string> stacks_state;

    while (std::getline(file, current_line)){
        // if we are still parsing the state of the towers
        if (reading_stacks_state){
            // If we read an empty line, we have finish recording the tower state
            if (current_line == ""){
                reading_stacks_state = false;
                // parse the tower state into a stacks_state vector
                parse_stacks(stacks_state_str, stacks_state);
            }
            // Record the tower state in a vector of strings for future parsing
            else{
                stacks_state_str.push_back(current_line);
            }
        }
        // Otherwise parse and apply the move action to the tower
        // without reversing src and destinations
        // since the cratemover7001 can move multiple crates at once.
        else{
            move_crates(current_line, stacks_state, false);
        }
    }

    return stack_tops(stacks_state);


}
