#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int most_cal = 0;
    // int elf_with_most_cal = 1;

    // int current_elf = 1;
    int current_cal = 0;

    std::string current_line;
    std::ifstream file("input.txt");

    while (std::getline(file, current_line)){
        std::cout << current_line << std::endl;
        if (current_line == ""){
            if (current_cal > most_cal){
                most_cal = current_cal;
                // elf_with_most_cal = current_elf;
            }
            current_cal = 0;
            // current_elf += 1;
        }
        else{
            current_cal += std::stoi(current_line);
        }
    }

    if (current_cal > most_cal){
        most_cal = current_cal;
        // elf_with_most_cal = current_elf;
    }

    std::cout << "Elf " << elf_with_most_cal << " has the most food with " << most_cal << " calories." << std::endl;

    return 0;

}