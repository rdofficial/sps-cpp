/*
Stone Paper Scissors Game [C++]

This is a small console based game, written in C++ programming language. The game requires user input in its each round. The game is the old and the simple game which first asks the user for their choice and then gets the random choice of the computer. Thus the game goes. The rules of win and loss are same as the classical stone-paper-scissor ganme. But, our game becomes trickier as it contains the negative scoring too. +5 points for a win, and -10 for a loss. And, there are no increment or decrement of the score in the case of a draw. The program has currently no dependencies and thus just use it freely. Checkout the README.md file of the project for more information about the program and also for installation help.

Author : Rishav Das (https://github.com/rdofficial/)
Created on : May 9, 2021

Last modified by : -
Last modified on : -

Authors contributed to this script (Add your name below if you have contributed) :
1. Rishav Das (github:https://github.com/rdofficial/, email:rdofficial192@gmail.com)
*/

// Importing the required header files
#include <iostream>
#include <string.h>
#include <cstdlib>

#include "regular.h"

using namespace std;

// Declaring all the functions here
int calculate(string userChoice);

int main(int argc, char *argv[]) {
	// Calling the game function in a loop
	int game = 1, score = 0;
	while (game) {
		// Clearing the screen on per round
		clearScreen();

		// Asking the user to enter a choice
		string userChoice;
		cout << "Enter your choice [ stone, paper, scissors ] : ";
		cin >> userChoice;

		// Calculating the user choice
		score = score + calculate(userChoice);
		cout << "[ Current score : " << score << " ]" << endl;

		// Asking wheter the user wants to go for another round or not
		string gameExitChoice;
		cout << "\nDo you want to end the game here? (Y/N) : ";
		cin >> gameExitChoice;

		// Checking the user's choice
		if (gameExitChoice == "y" || gameExitChoice == "Y") {
			// If the user wants to stop the game here

			game = 0;  // Making the game variable false, we can exit from the loop
		} else {
			// If the user enters any value other than 'y', then we consider it to be continuing the game

			continue;
		}
	}

	// When we are out of the loop, then we assume the user stopped the game. So, we print the final score on the screen
	clearScreen();
	cout << "[ Final score : " << score << " ]" << endl;
}

int calculate(string userChoice) {
	/* The function which runs the one round of the game */

	// Getting a random choice by the computer
	// Getting the random in terms of 1, 2 or 3 and later we will estimate the below specified stuff
	//
	// 1 --> stone
	// 2 --> paper
	// 3 --> scissors
	srand(time(0));
	int computerChoice = rand() % 3 + 1;

	// Checking the user entered option
	if (userChoice == "stone") {
		// If the user's choice is stone

		if (computerChoice == 1) {
			// If the computer also choosed stone, then its a draw

			cout << "[ Draw : The computer also choosed stone ]" << endl;
			return 0;
		} else if (computerChoice == 2) {
			// If the computer chooses paper, then its a loss

			cout << "[ Loss : The computer choosed paper ]" << endl;
			return -10;
		} else if (computerChoice == 3) {
			// If the computer chooses paper, then its a win

			cout << "[ Win : The computer choosed scissors ]" << endl;
			return 5;
		} else {
			// If the computer's choice is unrecognized, then we display an error message on the screen

			cout << "[ Error : The computer's choice is not recognized ]" << endl;
			return 0;
		}
	} else if (userChoice == "paper") {
		// If the user's choice is paper

		if (computerChoice == 1) {
			// If the computer chooses stone, then its a win

			cout << "[ Win : The computer choosed stone ]" << endl;
			return  5;
		} else if (computerChoice == 2) {
			// If the computer chooses paper, then its a draw

			cout << "[ Draw : The computer also choosed paper ]" << endl;
			return 0;
		} else if (computerChoice == 3) {
			// If the computer chooses scissors, then its a loss

			cout << "[ Loss : The computer choosed scissors ]" << endl;
			return -10;
		} else {
			// If the computer's choice is unrecognized, then we display an error message on the screen

			cout << "[ Error : The computer's choice is not recognized ]" << endl;
			return 0;
		}
	} else if (userChoice == "scissors") {
		// If the user's choice is scissors

		if (computerChoice == 1) {
			// If the computer choosed stone, then its a loss

			cout << "[ Loss : The computer choosed stone ]" << endl;
			return -10;
		} else if (computerChoice == 2) {
			// If the computer choosed paper, then its a win

			cout << "[ Win : The computer choosed paper ]" << endl;
			return 5;
		} else if (computerChoice == 3) {
			// If the computer choosed scissors, then its a draw

			cout << "[ Draw : The computer also choosed scissors ]" << endl;
			return 0;
		} else {
			// If the computer's choice is unrecognized, then we display the error message on the screen

			cout << "[ Error : The computer's choice is not recognized ]" << endl;
			return 0;
		}
	} else {
		// If the user entered option is not recognized, then we display the error message

		cout << "[ Error : Unrecognized input, please choose one of the stone, paper, or scissors ]" << endl;
		return 0;
	}

	return 0;
}
