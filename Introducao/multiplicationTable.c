#include <stdio.h>

int main(void) {

    int num;
    int multi;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++) {
        multi = num * i;
        printf("%d x %d = %d\n", num, i, multi);
    }
}