#include "day02a.hpp"
#include "day02b.hpp"

char find_your_action(const char& theirs, const char& desired_outcome){
    char yours;

    switch(desired_outcome){
        // Lose
        case 'X':
            switch (theirs){
                // if they play rock, you play scissors
                case 'A':
                    yours = 'C';
                    break;
                // if they play paper, you play rock
                case 'B':
                    yours = 'A';
                    break;
                // if they play scissors, you play paper
                case 'C':
                    yours = 'B';
                    break;
            }
            break;
        // Draw
        case 'Y':
            yours = theirs;
            break;
        // Win
        case 'Z':
            switch (theirs){
                // if they play rock, you play paper
                case 'A':
                    yours = 'B';
                    break;
                // if they play paper, you play scissors
                case 'B':
                    yours = 'C';
                    break;
                // if they play scissors, you play rock
                case 'C':
                    yours = 'A';
                    break;
            }
            break;
    }

    return yours;
}

int day02b(std::string filename, bool debug){

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
        theirs = current_line[0];
        desired_outcome = current_line[2];
        yours = find_your_action(theirs, desired_outcome);
        // Small hack
        // Because your old assumption was that XYZ corresponded to ABC,
        // We can convert yours from ABC back to XYZ by adding 23
        // Allowing us to use our play_round function from part 1 :)
        round_score = play_round(theirs, yours+23);
        // std::cout << "They played " << theirs << ", You played " << yours << ". You got " << round_score << " points!" << std::endl; 
        score += round_score;
    }

    return score;

}
