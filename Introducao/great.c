#include <stdio.h>

int main(void) {

    int num1, num2, num3;

    printf("Digite 3 números inteiros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if(num1 > num2)
        if(num1 > num3)
            if(num2 > num3)
                printf("%d %d %d", num3, num2, num1);
            else
                printf("%d %d %d", num2, num3, num1);
        else
            printf("%d %d %d", num2, num1, num3);
    else if(num2 > num3)
        if(num1 > num3)
            printf("%d %d %d", num3, num1, num2);
        else
            printf("%d %d %d", num1, num3, num2);
    else
        printf("%d %d %d", num1, num2, num3);
}