#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
using Board = vector<vector<string>>;
class TicTacToe
{
	Board board;
	int n;
	void printBoard()const;
	bool isWinner()const;
	bool checkimgVertical(const string s)const;
	bool checkimgHorizontal(const string s)const;
	bool checkingDiagonal(const string s)const;
	bool checkingCounterDiagonal(const string s)const;
public:
	void play();
	TicTacToe(int n);

};
#endif