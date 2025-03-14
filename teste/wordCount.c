#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {

    char c;
    int state, neword; 
    state = OUT;
    neword = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            state = OUT; 
        } else if(state == OUT) {
            state = IN;
            neword++;
        }

    }

    printf("Número de palavras: %d", neword);

}