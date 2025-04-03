#include <stdio.h>
// ----------------------------> chcp 65001
int main(void) {

    int num1, num2;
    float result;
    float floatResult;
    int option = 0;

    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);

    while(option == 0) {

        printf("\nQual operação?\n\n");
        printf("Soma = 1\nSubtraçao: 2\nMultiplicaçao: 3\nDivisao: 4\nEscolha: ");
        scanf("%d", &option);
        printf("%d\n", option);
        
        switch(option) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                result = num1 / (float) num2;
                break;
            default:
                printf("Valor inválido. Tente novamente");
                continue;
        }
    }

    printf("O resultado é: %.2f", result);

}