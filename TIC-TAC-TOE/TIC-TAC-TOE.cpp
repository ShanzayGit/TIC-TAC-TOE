#include<iostream>
#include<string>
#include<vector>
#include"TIC-TAC-TOE.h"
using namespace std;
void ticTacToe()
{
	int n;
	cout << "Enter size of TIC-TAC-TOE board you like (3/4/6/5/7/8/9/10): ";
	cin >> n;
	Board b(n, vector<string>(n));
	formatBoard(b, n);
	int index, i, j;
	printBoard(b,n);

	for (int k = 0; k < (n * n); k = k + 1)
	{

		if (k % 2 == 0)
		{
			cout << "\n TURN OF X\n";
			cout << "\nEnter index";
			cin >> index;
			i = (index - 1) / n;
			j = (index - 1) % n;
			if ((b[i][j] != "X") && (b[i][j] != "O"))
			{
				b[i][j] = "X";
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
			if ((b[i][j] != "X") && (b[i][j] != "O"))
			{
				b[i][j] = "O";
			}
			else
			{
				cout << "\nYou can not place symbol on one place twice!!!!\n";
				k = k - 1;
			}

		}
		printBoard(b,n);
		if (isWinner(b, n))
		{
			k = n*n;
		}
		else if (k == (n*n)-1)
		{
			cout << "\n DRAW!!!!!";
		}
	}
}
void printBoard(const Board& b,int n)
{
	for (int l = 0; l < (n); l = l + 1)
	{
		for (int m = 0; m < n; m = m + 1)
		{
			cout << b[l][m];
			if (b[l][m] != "X" && b[l][m] != "O")
			{
				int num = stoi(b[l][m]);
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
bool isWinner(const Board& b, int n)
{
	if (checkimgHorizontalX(b,n))
	{
		cout << "\n X won!!!!A";
		return 1;
	}
	else if (checkingCounterDiagonalX(b,n))
	{
		cout << "\nX WON!!!!B";
		return 1;

	}
	else if (checkingDiagonalX(b,n))
	{
		cout << "\nX WON!!!!C";
		return 1;
	}
	else if ((checkimgVerticalX(b,n)))
	{
		cout << "\nX WON!!!!D";
		return 1;
	}
	else if ((checkingCounterDiagonalO(b,n)) || (checkimgHorizontalO(b,n)) || (checkingDiagonalO(b,n)) || (checkimgVerticalO(b,n)))
	{
		cout << "\n O won!!!!";
		return 1;
	}
	else
	{
		return 0;
	}
}
bool checkimgHorizontalX(const Board& b, int n)
{
	for (int i = 0; i < n; i = i + 1)
	{
		int count = 0;
		for (int j = 0; j < n; j = j + 1)
		{
			if ((b[i][j]) == "X")
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
bool checkimgVerticalX(const Board& b, int n)
{
	for (int i = 0; i < n; i = i + 1)
	{
		int count = 0;
		for (int j = 0; j < n; j = j + 1)
		{
			if ((b[j][i]) == "X")
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
bool checkimgHorizontalO(const Board& b, int n)
{
	for (int i = 0; i < n; i = i + 1)
	{
		int count = 0;
		for (int j = 0; j < n; j = j + 1)
		{
			if ((b[i][j]) == "O")
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
bool checkimgVerticalO(const Board& b, int n)
{
	for (int i = 0; i < n; i = i + 1)
	{
		int count = 0;
		for (int j = 0; j < n; j = j + 1)
		{
			if ((b[j][i]) == "O")
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
bool checkingDiagonalX(const Board& b, int n)
{
	int count = 0;
	for (int i = 0; i < n; i = i + 1)
	{
		for (int j = 0; j < n; j = j + 1)
		{
			if ((i == j) && ((b[i][j]) == "X"))
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
bool checkingDiagonalO(const Board& b, int n)
{
	int count = 0;
	for (int i = 0; i < n; i = i + 1)
	{
		for (int j = 0; j < n; j = j + 1)
		{
			if ((i == j) && ((b[i][j]) == "O"))
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
bool checkingCounterDiagonalX(const Board& b, int n)
{
	int count = 0;
	int j = 0;
	for (int i = n - 1; i != -1; i = i - 1)
	{
		if ((b[i][j]) == "X")
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
bool checkingCounterDiagonalO(const Board& b, int n)
{
	int count = 0;
	int j = 0;
	for (int i = n - 1; i != -1; i = i - 1)
	{
		if ((b[i][j]) == "O")
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
	{
		return 0;
	}
}
void formatBoard( Board& b, int n)
{
	int num = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string val = to_string(num);
			b[i][j] = val;
			num++;
		}
	}
}
int main()
{
	ticTacToe();
	//int n;
	//cout << "Enter size of TIC-TAC-TOE board you like : ";
	//cin >> n;
	//string** b = new string * [n];
	//for (int i = 0; i < n; i++)
	//	b[i] = new string[n];
	//formatBoard(b, n);
	//printBoard(b, n);
}