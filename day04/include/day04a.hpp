#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>

/**
 * Checks if one range subsumes the other
 * (i.e., one range contains all elements of the other range)
 * 
 * @param ranges an array of 4 integers that define two ranges
 *               [start1, end1, start2, end2]
 * @return True if one of the ranges subsumes the other
 */
bool subsumes(const int ranges[4]);

/**
 * Checks if one range subsumes the other
 * (i.e., one range contains all elements of the other range)
 * 
 * @param line a string of form "<start1>-<end1>,<start2>-<end2>""
 * @param range array of 4 integers that are modified in-place to contain:
                [start1, end1, start2, end2]
 */
void parse_line(std::string line, int* ranges);

/**
 * Counts the number of subsuming ranges 
 * are in the given text file
 *
 * @param filename the filename of the txt file to parse
 * @return number of range pairs where oen range subsumes the other
 */
int day04a(std::string filename);