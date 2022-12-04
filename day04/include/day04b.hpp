#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "day04a.hpp"


/**
 * Checks if the ranges overlap
 * 
 * @param ranges an array of 4 integers that define two ranges
 *               [start1, end1, start2, end2]
 * @return True if one of the ranges overlaps the other
 */
bool overlaps(const int ranges[4]);

/**
 * Counts the number of overlapping ranges 
 * are in the given text file
 *
 * @param filename the filename of the txt file to parse
 * @return the number of overlapping ranges
 */
int day04b(std::string filename);