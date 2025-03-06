/***************************************************************** 

    File: lab5.c
    Author: [Your Name]
    Student Number: [Your Student Number]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab5.c lab5main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "lab5.h"


// Function 1: Sum of array elements
int sum(const int array[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}

// Function 2: Reverse an array
void reverse(int array[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

// Function 3: Count occurrences of a character in a string
int countChar(char ch, const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

// Function 4: Count occurrences of a character, case insensitive
#include <ctype.h>
int countAllCase(char ch, const char str[]) {
    int count = 0;
    ch = tolower(ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == ch) {
            count++;
        }
    }
    return count;
}
