#include <stdio.h>

#define LOWER 0
#define UPPPER 300
#define STEP 20

int main() {
    int fahr;

    // Forward
    printf("Forward Order:\n");
    printf("Celsius\t\tFahrenheit\n");
    for (fahr = LOWER; fahr <= UPPPER; fahr = fahr + STEP) {
        printf("%4d\t\t%6.1ff\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    printf("\n");

    // Reverse
    printf("Reverse Order:\n");
    printf("Celsius\t\tFahrenheit\n");
    for (fahr = UPPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%4d\t\t%6.1ff\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}
