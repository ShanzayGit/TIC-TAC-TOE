#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
using namespace std;
void ticTacToe();
void printBoard( string** b, int n);
void formatBoard(string** b, int n);
bool isWinner(string** b, int n);
bool checkimgVerticalX(string** b, int n);
bool checkimgHorizontalX(string** b, int n);
bool checkimgVerticalO(string** b, int n);
bool checkimgHorizontalO(string** b, int n);
bool checkingDiagonalO(string** b, int n);
bool checkingDiagonalX(string** b, int n);
bool checkingCounterDiagonalO(string** b, int n);
bool checkingCounterDiagonalX(string** b, int n);
#endif