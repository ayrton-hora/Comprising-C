#include <stdio.h>

int main() {
    int fahr;

    // Forward
    printf("Forward Order:\n");
    printf("Celsius\t\tFahrenheit\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%4d\t\t%6.1ff\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    printf("\n");

    // Reverse
    printf("Reverse Order:\n");
    printf("Celsius\t\tFahrenheit\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%4d\t\t%6.1ff\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}
