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

    for(int i = 1; i <= NUMERO_TENTATIVAS;  i++) {

        printf("Qual é o seu chute?: ");
        scanf("%d", &chute);
        acertou = chute == numero_secreto;
        maior = chute > numero_secreto;

        if(chute < 0) {
            i--;
            printf("sem número negativo aqui amigão\n");
        } else { // em vez de usar continue no if, utilize todo o código no else, após checar no if se chute 
            printf("Seu %do. chute foi %d\n", i, chute);

            int acertou = chute == numero_secreto;
            int maior = chute > numero_secreto;
            
             if(acertou) { // substituição do teste aqui para comparar e colocar seu valor numa variável mais legível
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
    }
    printf("Fim de jogo! ");
}


