#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>


/**
 * Computes the priority of the characters in the given string
 * a-z = 1-26, A-Z = 27-52
 * 
 * @param str the characters to compute the priorities for
 * @return the sum of the priorities of the characters in str
           after removing duplicates
 */
int get_priority(const std::string& str);

/**
 * Computes the characters in common between two strings 
 * 
 * @param part1 string 1: contents of compartment 1
 * @param part2 string 2: contents of compartment 2
 * @return A string containing common elements in both part1 and part2
 *         Note: may contain duplicates if same character occurs more than once in both strings
 */
std::string get_common_characters(const std::string& part1, const std::string& part2);

/**
 * Finds the sum of the priorities of the item types that appear in both compartments
 * across all rucksacks
 * 
 * @param filename the filename of the txt file to parse
 * @return the sum of the priorities
 */
int day03a(std::string filename);