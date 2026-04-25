#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
using Board = vector<vector<string>>;
void ticTacToe();
void printBoard( const Board& b, int n);
void formatBoard(Board& b, int n);
bool isWinner(const Board& b, int n);
bool checkimgVerticalX(const Board& b, int n);
bool checkimgHorizontalX(const Board& b, int n);
bool checkimgVerticalO(const Board& b, int n);
bool checkimgHorizontalO(const Board& b, int n);
bool checkingDiagonalO(const Board& b, int n);
bool checkingDiagonalX(const Board& b, int n);
bool checkingCounterDiagonalO(const Board& b, int n);
bool checkingCounterDiagonalX(const Board& b, int n);
#endif