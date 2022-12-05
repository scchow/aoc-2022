#include "day05a.hpp"

void parse_stacks(std::vector<std::string>& stacks_state_str, std::vector<std::string>& stacks_state){

    // std::vector<std::string> stacks_state;

    stacks_state.clear();

    // the height of the tallest pile
    // Drop the last string, because that is just the tower indices
    int tallest_pile_height = stacks_state_str.size() - 1;

    // For each pile, there are 4 characters in the tower state str '[X] '
    // Except for the last pile, which does not have the trailing space
    int num_piles = (stacks_state_str[0].length() + 1) / 4;

    // initialize tower state vector with empty piles
    for (size_t i = 0; i < num_piles; ++i){
        stacks_state.push_back("");
    }

    std::string current_height_str;
    char current_char;

    // fill out tower state
    for (size_t height = 0; height < tallest_pile_height; ++height){
        // Get the string corresponding to current height
        current_height_str = stacks_state_str[height];
        for (size_t pile_ind = 0; pile_ind < num_piles; ++pile_ind){
            // check the character at the index corresponding to pile_ind
            current_char = current_height_str[1+4*pile_ind];
            // If there is a non-space character there, there is something in the pile!
            // Add it to the bottom of the pile, since we are traversing from top down
            if (current_char != ' '){
                stacks_state[pile_ind].push_back(current_char);
            }
        }
    }

    // return stacks_state;

}

void move_crates(std::string action, std::vector<std::string>& stacks_state, bool reverse){
    std::regex action_regex("move\\ ([0-9]+)\\ from\\ ([0-9])+\\ to\\ ([0-9]+)");
    std::smatch matches;
    // std::ssub_match match;
    // the action array is composed of [# elements to move, source index, destination index]
    // note that indices begin with 1 because of how the problem was constructed.
    int actions[3];
    if (std::regex_match(action, matches, action_regex)){
        if (matches.size() == 4){            
            for (size_t i = 0; i < 3; ++i){
                // ignore the first element of match because it is the whole string.
                actions[i] = std::stoi(matches[i+1].str());
            }
        }
        else{
            std::cout << "Warning, got less than 4 matches in regex, something may have gone wrong with regex parsing!" << std::endl;
        }
    }

    int num_to_move = actions[0];
    int src_ind = actions[1]-1;
    int dest_ind = actions[2]-1;

    std::string src = stacks_state[src_ind];
    std::string dest = stacks_state[dest_ind];
    std::string str_to_move = src.substr(0, num_to_move);

    // reverse the moved block's order if reverse 
    if (reverse){
        std::reverse(str_to_move.begin(), str_to_move.end());
    }

    stacks_state[dest_ind] = str_to_move + dest;
    stacks_state[src_ind] = src.substr(num_to_move, src.length()-num_to_move);

}

std::string stack_tops(std::vector<std::string>& stacks_state){
    std::string tops = "";
    for (auto it = stacks_state.begin(); it != stacks_state.end(); ++it){
        if (*it == ""){
            std::cout << "Warning: We have a tower with no elements in it, need to modify code to handle this case!" << std::endl;
        }
        else{
            tops += (*it)[0];
        }
    }
    return tops;
}


std::string day05a(std::string filename){

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
        // reversing source and destination pile's crate order
        // since the we can only move 1 crate at a time.
        else{
            move_crates(current_line, stacks_state, true);
        }
    }

    return stack_tops(stacks_state);


}
