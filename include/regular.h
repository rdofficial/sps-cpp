/*
regular.h - SPS [C++]

A header file for defining various functions and preprocessors which are often used in the entire program (and the source files in the project).

Author : Rishav Das (https://github.com/rdofficial/)
Created on : May 8, 2021

Last modified by : -
Last modified on : -
*/

// Including the required header files
#include <stdio.h>

// Defining the ANSII color codes for colored output
//
// 1. The ANSII color codes are only defined for the linux kernel based operating system, thus they become useless for windows user. So, we leave the color codes blank for windows compilation.
//
#ifdef linux
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define RED_REV "\033[07;91m"
#define YELLOW_REV "\033[07;92m"
#define DEFCOL "\033[00m"
#define CLEAR "\e[1;1H\e[2J"
#elif defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)
#define RED ""
#define GREEN ""
#define YELLOW ""
#define BLUE ""
#define RED_REV ""
#define YELLOW_REV ""
#define DEFCOL ""
#define CLEAR ""
#endif

// Declaring the clearScreen function
//
// 1. The preprocessor to be printed in this function, is already defined in the ANSII color codes section (i.e., CLEAR)
//
void clearScreen();
