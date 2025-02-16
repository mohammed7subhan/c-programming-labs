/***************************************************************** 

    File: lab2.c
    Author: [MOHAMMED SUBHAN MALEK]
    Student Number: [135726248]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/

#include <stdio.h>
#include "lab2.h"

#include "lab2.h"

// Function to return the last digit of a number
int lastDigit(int number) {
    return number % 10;  // Extract last digit using modulus operator
}

// Function to return whole minutes from seconds
int wholeMinutes(int seconds) {
    return seconds / 60;  // Integer division to get whole minutes
}