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
    int maior = 0;
    int acertou = 0;
    printf("%d\n", chute);

    for(int i = 1; i <= NUMERO_TENTATIVAS;  i++) {

        printf("Qual é o seu chute?: ");
        scanf("%d", &chute);
        acertou = chute == numero_secreto;
        maior = chute > numero_secreto;

        if(acertou) { // substituição da comparação aqui para comparar e colocar seu valor numa variável mais legível
            printf("Parabéns! Você acertou!\n");
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o número secreto!\n");
            printf("Você tem %d tentativas restantes.\n", NUMERO_TENTATIVAS - i);
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
            printf("Você tem %d tentativas restantes.\n", NUMERO_TENTATIVAS - i);
        }
    }
    printf("Fim de jogo! ");
}


