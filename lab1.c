#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    // Prompt the user for input
    printf("Please enter the temperature in Celsius: ");
    scanf("%d", &celsius);

    // Calculate Fahrenheit
    fahrenheit = (celsius * 9.0 / 5) + 32;

    // Display the result
    printf("%d degrees Celsius is %.2f degrees Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

