#include<iostream>
#include<string>
#include<vector>
#include"TIC-TAC-TOE.h"
using namespace std;
void TicTacToe::play()
{
	int index, i, j;
	printBoard();

	for (int k = 0; k < (n * n); k = k + 1)
	{

		if (k % 2 == 0)
		{
			cout << "\n TURN OF X\n";
			cout << "\nEnter index";
			cin >> index;
			i = (index - 1) / n;
			j = (index - 1) % n;
			if ((board[i][j] != "X") && (board[i][j] != "O"))
			{
				board[i][j] = "X";
			}
			else
			{
				cout << "\nYou can not place symbol on one place twice!!!!\n";
				k = k - 1;
			}

		}
		else if (k % 2 != 0)
		{
			cout << "\n TURN OF O\n";
			cout << "\nEnter index";
			cin >> index;
			i = (index - 1) / n;
			j = (index - 1) % n;
			if ((board[i][j] != "X") && (board[i][j] != "O"))
			{
				board[i][j] = "O";
			}
			else
			{
				cout << "\nYou can not place symbol on one place twice!!!!\n";
				k = k - 1;
			}

		}
		printBoard();
		if (isWinner())
		{
			k = n*n;
		}
		else if (k == (n*n)-1)
		{
			cout << "\n DRAW!!!!!";
		}
	}
}
void TicTacToe::printBoard()const
{
	for (int l = 0; l < (n); l = l + 1)
	{
		for (int m = 0; m < n; m = m + 1)
		{
			cout << board[l][m];
			if (board[l][m] != "X" && board[l][m] != "O")
			{
				int num = stoi(board[l][m]);
				if (num / 10 == 0)
					cout << " ";
			}
			else
				cout << " ";
			cout << "  ";
		}
		cout << "\n";
	}
}
bool TicTacToe::isWinner()const
{
	if (checkimgHorizontal("X")|| (checkingCounterDiagonal("X"))|| (checkingDiagonal("X"))|| (checkimgVertical("X")))
	{
		cout << "\n X won!!!!";
		return 1;
	}
	else if ((checkingCounterDiagonal("O")) || (checkimgHorizontal("O")) || (checkingDiagonal("O")) || (checkimgVertical("O")))
	{
		cout << "\n O won!!!!";
		return 1;
	}
	else
	{
		return 0;
	}
}
bool TicTacToe::checkimgHorizontal(const string s)const
{
	for (int i = 0; i < n; i = i + 1)
	{
		int count = 0;
		for (int j = 0; j < n; j = j + 1)
		{
			if ((board[i][j]) == s)
			{
				count = count + 1;
			}
		}
		if (count == n)
		{
			return 1;
		}
	}
	return 0;
}
bool TicTacToe::checkimgVertical(const string s)const
{
	for (int i = 0; i < n; i = i + 1)
	{
		int count = 0;
		for (int j = 0; j < n; j = j + 1)
		{
			if ((board[j][i]) == s)
			{
				count = count + 1;
			}
		}
		if (count == n)
		{
			return 1;
		}
	}
	return 0;
}


bool TicTacToe::checkingDiagonal(const string s)const
{
	int count = 0;
	for (int i = 0; i < n; i = i + 1)
	{
		for (int j = 0; j < n; j = j + 1)
		{
			if ((i == j) && ((board[i][j]) == s))
			{
				count = count + 1;
			}
		}
	}
	if (count == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool TicTacToe::checkingCounterDiagonal(const string s)const
{
	int count = 0;
	int j = 0;
	for (int i = n - 1; i != -1; i = i - 1)
	{
		if ((board[i][j]) == s)
		{
			count = count + 1;
			j = j + 1;
		}
	}
	if (count == n)
	{
		return 1;
	}
	else
		return 0;
}
TicTacToe::TicTacToe(int size):n(size)
{
	board.resize(n,vector<string>(n));
	int num = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string val = to_string(num);
			board[i][j] = val;
			num++;
		}
	}
}
