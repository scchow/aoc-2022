#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <algorithm> 

#include "day05a.hpp"

/**
 * Find the crate character at the top of each stack
 * 
 * @param stacks_state_str the string representation of the stack 
 *        including the indices as the last element in the vector.
 *        e.g.,      ["    [D]    ",
 *                    "[N] [C]    ",
 *                    "[Z] [M] [P]",
 *                    " 1   2   3 "]
 * @param stacks_state a vector representing the state of each stack of crates 
 *                     (modified in place)
 */
void parse_stacks(std::vector<std::string>& stacks_state_str, std::vector<std::string>& stacks_state);

/**
 * Find the crate character at the top of each stack
 * 
 * @param action the string representation of the action to take in the form
 *               "move <# crates> from <src stack index> to <dest stack index>"
 * @param stacks_state a vector representing the state of each stack of crates 
 *                     (modified in place)
 * @param reverse whether crates need to be moved one at a time, 
 *                causing the moved crates to be put in reverse order
 *                compared to their original order in the src stack 
 */
void move_crates(std::string action, std::vector<std::string>& stacks_state, bool reverse=true);

/**
 * Find the crate character at the top of each stack
 * 
 * @param stacks_state a vector representing the state of each stack of crates
 * @return string representing crates at the top of the stacks
 *         after performing the requested move actions
 */
std::string stack_tops(std::vector<std::string>& stacks_state);

/**
 * Given a starting state for stacks of crates
 * and a sequence of crate moving operations
 * We want to find the final state of the stacks and report
 * the characters representing the crates at the top of each stack.
 * 
 * @param filename the filename of the txt file to parse
 * @return string representing crates at the top of the stacks
 *         after performing the requested move actions
 */
std::string day05a(std::string filename);
