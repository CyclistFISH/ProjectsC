#include <stdio.h>

int main(void) {

    int num1, num2, num3, temp;
    
    printf("Digite 3 números:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if(num1 < num2) {temp = num1; num1 = num2; num2 = temp;} // se num1 < num2, num1 se torna o valor maior
    if(num2 < num3) {temp = num2; num2 = num3; num3 = temp;} // se num2, agora menor que num1, for menor q num3, num2 agora é maior que num3
    if(num1 < num2) {temp = num1; num1 = num2; num2 = temp;} // se num2 agora for maior q num1, num1 se torna num2, que é maior que num3

    printf("%d %d %d", num3, num2, num1);

}