/***************************************************************** 

    File: lab5main.c
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

int main(void)
{
    int array1[] = {1, 2, 3, 4};
    int size1 = 4;
    
    printf("Sum of array: %d\n", sum(array1, size1));

    int array2[] = {2, 1, 3, 4, 7, 6};
    int size2 = 6;
    reverse(array2, size2);
    printf("Reversed array: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    char myStr[] = "the quick brown Fox jumped Over r2d2 but c 3po was Too tall";
    printf("Count of 't': %d\n", countChar('t', myStr));
    printf("Count of 'o' (case insensitive): %d\n", countAllCase('o', myStr));

    return 0;
}