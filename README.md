# TIC-TAC-TOE (Customizable n×n Board)
## Overview

This project implements a **Tic Tac Toe console game in C++**, playable between two people.  
Unlike the standard 3×3 board, this version allows you to choose **any board size (n×n)**.  
A player wins if they achieve **n consecutive marks (X or O)** horizontally, vertically, diagonally, or counter‑diagonally.


## 📂 Folder Structure

TIC-TAC-TOE/
- TIC-TAC-TOE/        # Contains Tic-Tac-Toe.cpp, Tic-Tac-Toe.h, and other source files
- main.cpp            # Driver file (entry point to be added)
- TIC-TAC-TOE.sln     # Visual Studio solution file
- .gitignore
- .gitattributes

## ⚙️ Build & Run Instructions

### 🔹 On Windows (Visual Studio)
1. Open `TIC-TAC-TOE.sln` in Visual Studio.
2. Add `main.cpp` at the root and include all `.cpp` and `.h` files from `TIC-TAC-TOE/`.
3. Build the solution (`Ctrl+Shift+B`).
4. Run with **Ctrl+F5**.

### 🔹 On Linux/Mac (g++)
Compile all `.cpp` files together with `main.cpp`:

g++ TIC-TAC-TOE/*.cpp main.cpp -o tictactoe_app
./tictactoe_app


## 🧩 Example Usage 
  

  TicTacToe game();
  game.play();


**Expected Console Flow:**
Enter board size (n): 3
1  2  3
4  5  6
7  8  9
Enter index player X : 5
1  2  3 
4  X  6
7  8  9
Enter Index Player O : 1
...
Player X wins!

## 🚀 Features Implemented
- Customizable board size (n×n)
- Two‑player interactive console play
- Winning streak detection:
  - Horizontal
  - Vertical
  - Diagonal
  - Counter‑diagonal
- Modular design with `.cpp` and `.h` separation


## 📌 Future Improvements
- Add AI opponent (minimax algorithm).
- Implement replay/score tracking.
- Add GUI frontend (WinUI 3, Qt, or HTML/CSS/JS).
- Improve input validation and error handling.


## 👤 Author
Developed by **Shanzay Malik**  
