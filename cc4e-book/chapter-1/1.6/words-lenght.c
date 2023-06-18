#include <stdio.h>

#define YES 1
#define NO 0
#define WORDS_MAX 10

int main() {
    int c, nLine, nWord, nChar, inWord;
    
    int wordsLen[10];
    for (int i = 0; i < 10; ++i)
        wordsLen[i] = 0;

    inWord = NO;
    nWord = nChar = 0;
    printf("Input:\n");
    while (nWord <= WORDS_MAX && (c = getchar()) != EOF) {
        ++nChar;

        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = NO;
            wordsLen[nWord - 1] = nChar - 1;
            nChar = 0;
        }

        else if (inWord == NO) {
            inWord = YES;
            ++nWord;
        }
    }

    printf("\nNumber of Words: %d\n\n", nWord);
    printf("\t\tLenghts - Histogram\n");
    printf("-------------------------------------------------------\n");
    for (int i = 60; i > 0; --i) {
        if (i < 10)
            printf("%d  -|", i);
        
        else
            printf("%d -|", i);

        for (int j = 0; j < nWord; ++j) {
            if (wordsLen[j] + 1 >= i)
                printf("     *     ");
        }

        printf("\n");
        if (i == 1) {
        printf("    |");
        for (int k = 0; k < nWord; ++k) {
                printf("  Word %d  |", k + 1);
            }
        }
    }
    
    printf("\n");

    return 0;
}
