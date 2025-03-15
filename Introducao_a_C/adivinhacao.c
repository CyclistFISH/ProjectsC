#include <stdio.h>
// chcp 1252  <-----------------------------------
#define NUMERO_TENTATIVAS 3

int erros(int count) {
    
}

int main(void) {

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinha��o *\n");
    printf("************************************\n");

    int numero_secreto = 42;
    int chute;
    int maior = 0;
    int acertou = 0;

    for(int i = 1; i <= NUMERO_TENTATIVAS;  i++) {

        printf("Qual � o seu chute?: ");
        scanf("%d", &chute);
        acertou = chute == numero_secreto;
        maior = chute > numero_secreto;

        if(chute < 0) {
            i--;
            printf("Valor inv�lido: N�mero negativo\nEntre com um valor v�lido :D\n");
            printf("Voc� ainda tem %d tentativas.\n", NUMERO_TENTATIVAS - i);
            continue;
        }

        if(acertou) { // substitui��o da compara��o aqui para comparar e colocar seu valor numa vari�vel mais leg�vel
            printf("Parab�ns! Voc� acertou!\n");
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o n�mero secreto!\n");
            printf("Voc� tem %d tentativas restantes.\n", NUMERO_TENTATIVAS - i);
        } else {
            printf("Seu chute foi menor do que o n�mero secreto!\n");
            printf("Voc� tem %d tentativas restantes.\n", NUMERO_TENTATIVAS - i);
        }
    }
    printf("Fim de jogo! ");
}


