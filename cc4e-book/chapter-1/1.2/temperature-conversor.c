#include <stdio.h>

int main() {
    int lower, upper, step;
    float fahr, celsius;

    // Fahrenheit to Celsius
    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size
    fahr = lower;

    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    // Celsius to Fahrenheit
    lower = (5.0 / 9.0) * (lower - 32.0);
    upper = (5.0 / 9.0) * (upper - 32.0);
    celsius = lower;

    printf("\nCelsius\t\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = (celsius * (9.0 / 5.0)) + 32;
        printf("%6.0f\t\t%4.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}
