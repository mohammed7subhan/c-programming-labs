/***************************************************************** 

    File: lab2main.c
    Author: [Your Name]
    Student Number: [Your Student Number]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "lab2.h"

int main(void){
    int number, seconds;

    // Interactive testing for lastDigit()
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("lastDigit(%d) = %d\n", number, lastDigit(number));

    // Interactive testing for wholeMinutes()
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    printf("wholeMinutes(%d) = %d\n", seconds, wholeMinutes(seconds));

    // Hardcoded test cases for lastDigit()
    printf("\nHardcoded Tests:\n");
    printf("lastDigit(%d) = %d\n", 12345, lastDigit(12345));
    printf("lastDigit(%d) = %d\n", 3460, lastDigit(3460));
    printf("lastDigit(%d) = %d\n", 1, lastDigit(1));

    // Hardcoded test cases for wholeMinutes()
    printf("wholeMinutes(%d) = %d\n", 75, wholeMinutes(75));
    printf("wholeMinutes(%d) = %d\n", 155, wholeMinutes(155));
    printf("wholeMinutes(%d) = %d\n", 3600, wholeMinutes(3600));

    return 0;
}
