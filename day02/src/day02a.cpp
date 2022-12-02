#include "day02a.hpp"

char counters(const char& move, bool reverse){
    if (reverse){
        switch (move){
            case 'R':
                return 'S';
            case 'P':
                return 'R';
            case 'S':
                return 'P';
        }
    }
    switch (move){
        case 'R':
            return 'P';
        case 'P':
            return 'S';
        case 'S':
            return 'R';
    }

    return 0;
}

char convert_to_rps(const char& move){
    switch (move){
        case 'A':
            return 'R';
        case 'B':
            return 'P';
        case 'C':
            return 'S';
        case 'X':
            return 'R';
        case 'Y':
            return 'P';
        case 'Z':
            return 'S';
    }
    return 0;
}

int play_round(const char& theirs, const char& yours){
    int shape_score = 0;
    switch(yours){
        case 'R':
            shape_score = 1; // 1 for Rock
            break;
        case 'P':
            shape_score = 2; // 2 for Paper
            break;
        case 'S':
            shape_score = 3; // 3 for Scissors
            break;
    }

    // Default you lost
    int outcome_score = 0;

    // If you drew
    if (yours == theirs){
        outcome_score = 3;
    }
    // If you won
    else if (yours == counters(theirs)){
        outcome_score = 6;
    }

    return shape_score + outcome_score;

}

int day02a(std::string filename, bool verbose){

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
        theirs = convert_to_rps(current_line[0]);
        yours = convert_to_rps(current_line[2]);
        round_score = play_round(theirs, yours);
        if (verbose){
            std::cout << "They played " << theirs 
                      << ", You played " << yours 
                      << ". You got " << round_score 
                      << " points!" << std::endl; 
        }
        score += round_score;
    }

    return score;

}
