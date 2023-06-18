#include <stdio.h>

int main() {
    int c, nWhite, nOther;
    int nDigit[10];

    nWhite = nOther = 0;
    for (int i = 0; i < 10; ++i)
        nDigit[i] = 0;
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++nDigit[c - '0'];
        
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nWhite;
        
        else
            ++nOther;
    }

    printf("Digits: ");
    for (int i = 0; i < 10; ++i)
        printf(" %d", nDigit[i]);
    
    printf("\nWhite spaces: %d\nOthers: %d\n", nWhite, nOther);

    return 0;
}
