#include<iostream>
#include<string>
#include<vector>
#include"TIC-TAC-TOE.h"
using namespace std;
int main()
{
	int n;
	cout << "Enter size of board (nxn) :";
	cin >> n;
	TicTacToe game(n);
	game.play();
}