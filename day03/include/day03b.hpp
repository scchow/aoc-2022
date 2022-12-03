#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "day03a.hpp"

/**
 * Finds the sum of the priorities of the item types that correspond to 
 * the badges of each three-Elf group.
 * 
 * @param filename the filename of the txt file to parse
 * @return the sum of the priorities of the badges for each group
 */
int day03b(std::string filename);