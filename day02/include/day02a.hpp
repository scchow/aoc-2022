#pragma once

#include <iostream>
#include <fstream>
#include <string>

/**
 * Finds the action that counters move.
 * 
 * E.g. counters('R') = 'P' because rock is beaten by paper
 * 
 * If reverse is True, we instead return what move counters
 * E.g. counters('R', True) = 'S' because scissors beats rock
 * 
 * @param move 'R', 'P', or 'S' denoting the move taken
 * @param reverse flag to return the action countered by move
 * @return the action 'R', 'P', 'S' that counters move 
 *         (or countered by move if reverse is true)
 */
char counters(const char& move, bool reverse = false);

/**
 * Converts the given move in 'A,B,C' or 'X,Y,Z' notation
 * to standardized 'R,P,S' to avoid headaches 
 * from converting from one to another
 * 
 * A,X -> 'R'ock
 * B,Y -> 'P'aper
 * C,Z -> 'S'cissors
 * 
 * @param move one of 'A,B,C,X,Y,Z' denoting the move taken * 
 * @return the corresponding move in 'R,P,S'
 */
char convert_to_rps(const char& move);

/**
 * Plays a single round of Rock, Paper Scissors and computes your score
 * 
 * Scored by assigning 1, 2, or 3 points for rock, paper, and scissors
 * respectively added with 0, 3, 6 points losing, drawing, or winning
 * 
 * @param theirs one of 'R,P,S' corresponding to the opponent's move
 * @param yours one of 'R,P,S' corresponding to the your move 
 * @return The score for this round
 */
int play_round(const char& theirs, const char& yours);

/**
 * Plays multiple rounds of Rock, Paper Scissors using the given strategy
 * 
 * @param filename the filename of the txt file containing the RPS strategy
 * @param verbose prints out debugging messages to stdout
 * @return The total score of the player after play all rounds using the given RPS strategy
 */
int day02a(std::string filename, bool verbose = false);