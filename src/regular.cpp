/*
regular.c - SPS [C++]

The C file where we define all the functions and objects that were declared in the regular.h header file.

Author : Rishav Das (https://gihub.com/rdofficial/)
Created on : May 8, 2021

Last modified by : -
Last modified on : -
*/

#include "regular.h"

void clearScreen() {
	/* The function to clear the console screen. This function can be used to clear out the already displayed text on the terminal (console screen). Thus, it makes the output of the program to be more clean and attractive to the user. */

	for (int i = 0; i < 1000; i++) {
		printf("%s", CLEAR);
	}
}
