#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{

    std::vector<int> top_cals = {-1, -1, -1};
    std::vector<int> top_elves = {-1, -1, -1};

    std::string current_line;
    std::ifstream file("input.txt");

    int current_elf = 1;
    int current_cal = 0;

    while (std::getline(file, current_line)){
        if (current_line == ""){
            if (current_cal > top_cals[0]){
                
                top_cals[2] = top_cals[1];
                top_elves[2] = top_elves[1];
                top_cals[1] = top_cals[0];
                top_elves[1] = top_elves[0];
                top_cals[0] = current_cal;
                top_elves[0] = current_elf;
            }
            else if (current_cal > top_cals[1]){
                top_cals[2] = top_cals[1];
                top_elves[2] = top_elves[1];
                top_cals[1] = current_cal;
                top_elves[1] = current_elf;
            }
            else if (current_cal > top_cals[2]){
                top_cals[2] = current_cal;
                top_elves[2] = current_elf;
                // elf_with_most_cal = current_elf;
            }
            current_cal = 0;
            current_elf += 1;
        }
        else{
            current_cal += std::stoi(current_line);
        }
    }

    if (current_cal > top_cals[0]){
        top_cals[2] = top_cals[1];
        top_elves[2] = top_elves[1];
        top_cals[1] = top_cals[0];
        top_elves[1] = top_elves[0];
        top_cals[0] = current_cal;
        top_elves[0] = current_elf;
    }
    else if (current_cal > top_cals[1]){
        top_cals[2] = top_cals[1];
        top_elves[2] = top_elves[1];
        top_cals[1] = current_cal;
        top_elves[1] = current_elf;
    }
    else if (current_cal > top_cals[2]){
        top_cals[2] = current_cal;
        top_elves[2] = current_elf;
    }


    std::cout << "The top 3 elves have "<< top_cals[0] + top_cals[1] + top_cals[2] << " calories." << std::endl;

    return 0;

}