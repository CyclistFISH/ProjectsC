#include <stdio.h>
// chcp 1252  <-----------------------------------
#define NUMERO_TENTATIVAS 3

int erros(int count) {
    
}

int main(void) {

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int numero_secreto = 42;
    int chute;
    int tentativas = 1;
    int maior = 0;
    int acertou = 0;

    while(1) {

        printf("Qual é o seu chute?: ");
        scanf("%d", &chute);
        acertou = chute == numero_secreto;
        maior = chute > numero_secreto;

        if(chute < 0) {
            printf("-----------------------------------------------------------------\n"); 
            printf("Valor inválido: Número Negativo >:(\n");
            printf("Não aceitamos negatividade por aqui. Tente novamente! E dessa vez, \n"); 
            printf("\n*************\nCERTIFIQUE-SE\n*************\n\nde ser positivo.\n");
            printf("-----------------------------------------------------------------\n"); 
            continue;
        }
        	
        if(acertou) {
            printf("Parabéns! Você acertou na sua %da tentativa!\n", tentativas);
            break;
        } else if (maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        } else {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas++;
    }
    printf("Fim de jogo! ");
}


