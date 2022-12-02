#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void update_top(int current_cal, int current_elf, std::vector<int>& top_cals, std::vector<int>& top_elves){
    if (current_cal > top_cals[2]){
        top_cals.pop_back();
        top_elves.pop_back();
        if (current_cal > top_cals[0]){
            top_cals.insert(top_cals.begin(), current_cal);
            top_elves.insert(top_elves.begin(), current_elf);
        }
        else if (current_cal > top_cals[1]){
            top_cals.insert(top_cals.begin()+1, current_cal);
            top_elves.insert(top_elves.begin()+1, current_elf);

        }
        else{
            top_cals.push_back(current_cal);
            top_elves.push_back(current_elf);
        }
    }
}

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
            update_top(current_cal, current_elf, top_cals, top_elves);
            current_cal = 0;
            current_elf += 1;
        }
        else{
            current_cal += std::stoi(current_line);
        }
    }

    update_top(current_cal, current_elf, top_cals, top_elves);

    std::cout << "The top 3 elves have "<< top_cals[0] + top_cals[1] + top_cals[2] << " calories." << std::endl;

    return 0;

}