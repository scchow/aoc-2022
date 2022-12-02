#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "day02a.hpp"

/**
 * Finds the move to play against the opponent to yield the desired outcome.
 * 
 * @param theirs one of 'R', 'P', 'S' denoting move taken by opponent
 * @param desired_outcome one of 'X', 'Y', 'Z' denoting whether to win, draw, or lose
 * @return one of 'R', 'P', 'S', that will lead to the desired outcome
 */
char find_your_action(const char& theirs, const char& desired_outcome);

/**
 * Plays multiple rounds of Rock, Paper Scissors using the given strategy
 * where the second column of strategy is whether to win, lose, or draw.
 * Unlike in day02a, where the second column strategy was assumed to be the player's move
 * 
 * @param filename the filename of the txt file containing the RPS strategy
 * @param verbose prints out debugging messages to stdout
 * @return The total score of the player after play all rounds using the given RPS strategy
 */
int day02b(std::string filename, bool verbose = false);