#include "day02b.hpp"

char find_your_action(const char& theirs, const char& desired_outcome){

    switch(desired_outcome){
        // Lose
        case 'X':
            return counters(theirs, true);
        // Draw
        case 'Y':
            return theirs;
        // Win
        case 'Z':
            return counters(theirs);
    }

    return 0;
}

int day02b(std::string filename, bool verbose){

    std::string current_line;
    std::ifstream file(filename);

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    char theirs = '0';
    char desired_outcome = '0';
    char yours = '0';
    int score = 0;
    int round_score = 0;

    while (std::getline(file, current_line)){
        theirs = convert_to_rps(current_line[0]);
        desired_outcome = current_line[2];
        yours = find_your_action(theirs, desired_outcome);
        round_score = play_round(theirs, yours);
        score += round_score;
        if (verbose){
            std::cout << "They played " << theirs 
                      << ", You played " << yours 
                      << ". You got " << round_score 
                      << " points!" << std::endl; 
        }
    }

    return score;

}
