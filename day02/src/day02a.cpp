#include "day02a.hpp"

int play_round(const char& theirs, const char& yours){
    int shape_score = 0;
    switch(yours){
        case 'X':
            shape_score = 1; // 1 for Rock
            break;
        case 'Y':
            shape_score = 2; // 2 for Paper
            break;
        case 'Z':
            shape_score = 3; // 3 for Scissors
    }

    // Default you lost
    int outcome_score = 0;

    // If you drew
    // Small hack: since the opponent's encoding for Rock Paper Scissors (ABC)
    // is offset from your encoding (XYZ), we can just add 23 and compare for equality
    if (yours == theirs+23){
        outcome_score = 3;
    }
    // If you won
    else if ((yours == 'X' && theirs == 'C') ||  // Rock beats scissors
             (yours == 'Y' && theirs == 'A') ||  // Paper beats rock
             (yours == 'Z' && theirs == 'B')){   // Scissors beats Paper
        outcome_score = 6;
    }

    return shape_score + outcome_score;

}

int day02a(std::string filename, bool debug){

    std::string current_line;
    std::ifstream file(filename);

    if (!file){
        std::cout << "File " << filename << " does not exist" << std::endl;
    }

    char theirs = '0';
    char yours = '0';
    int score = 0;
    int round_score = 0;

    while (std::getline(file, current_line)){
        theirs = current_line[0];
        yours = current_line[2];
        round_score = play_round(theirs, yours);
        // std::cout << "They played " << theirs << ", You played " << yours << ". You got " << round_score << " points!" << std::endl; 
        score += round_score;
    }

    return score;

}
