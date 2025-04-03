#include <stdio.h>

int main(void) {

    int num;
    int fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i--) {

        fatorial *= i;
        if(i == 1) 
            printf("%d = %d", i, fatorial);
        else 
            printf("%d * ", i);
        
    }
}