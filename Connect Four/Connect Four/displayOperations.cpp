#include "stdafx.h"
#include <iostream>
#include "forwardDecs.h"

//Welcom message, rules etc.
void welcome() {
	cout << "Welcome to connect four!\n\n"
			"Rules: \n"
			" - Players take turns selecting a column to drop a token into\n"
			" - Player 1 has the X token, Player 2 has the O token.\n"
			" - The aim of the game is to connect 4 pieces, either vertically, horizontally or diagonally\n"
			"When promted that it is your turn, simply enter the column number you wish to drop a token into and press enter.\n\n"
			"Happy playing!\n" << endl;
}

//displays the game array in correct formatting
void displayArray(string gameArray[][columns]) {
	system("cls");
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			cout << "| " << gameArray[i][j]<<" ";
		}
		cout << "|\n";
	}
};