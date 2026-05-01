#include "TicTacToe.h"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter board size (n): ";
    cin >> n;

    TicTacToe game(n);
    game.play();

    return 0;
}

