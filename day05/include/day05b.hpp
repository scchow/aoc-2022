#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "day05a.hpp"

/**
 * Given a starting state for stacks of crates
 * and a sequence of crate moving operations
 * We want to find the final state of the stacks and report
 * the characters representing the crates at the top of each stack.
 * 
 * Unlike in part a, our crane can now move multiple crates at once
 * without changing the order of the crates.
 * 
 * @param filename the filename of the txt file to parse
 * @return string representing crates at the top of the stacks
 *         after performing the requested move actions
 */
std::string day05b(std::string filename);