#include <stdio.h>
// chcp 1252  <-----------------------------------

int main(void) {

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int secret_number = 42;
    int guess;
    int attempt = 1;
    int greater = 0;
    int correct = 0;
    double points = 1000;

    while(1) {

        printf("Qual é o seu chute?: ");
        scanf("%d", &guess);
        correct = guess == secret_number;
        greater = guess > secret_number;
        double lostpoints = (guess - secret_number) / 2.0; // utilizamos 2.0 para a conta não resultar em um
        // valor truncado. Caso fosse 2, o interpratador fará a conta com números inteiros e o resultado será int
        // para resolvermos, basta transformar um dos números em um valor de ponto flutuante, o que fará com que
        // a conta seja feita como um valor de ponto flutuante. Essa é uma das maneiras. 
        points = points - lostpoints; 

        if(guess < 0) {
            printf("-----------------------------------------------------------------\n"); 
            printf("Valor inválido: Número Negativo >:(\n");
            printf("Não aceitamos negatividade por aqui. Tente novamente! E dessa vez, \n"); 
            printf("\n*************\nCERTIFIQUE-SE\n*************\n\nde ser positivo.\n");
            printf("-----------------------------------------------------------------\n"); 
            continue;
        }
        	
        if(correct) {
            printf("Parabéns! Você acertou na sua %da tentativa!\n", attempt);
            break;
        } else if (greater) {
            printf("Seu chute foi maior que o número secreto!\n");
        } else {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        attempt++;
    }
    printf("Fim de jogo! ");
    printf("Você fez %f pontos\n", points);
}


