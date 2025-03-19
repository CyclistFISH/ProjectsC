#include <stdio.h>
// chcp 1252  <-----------------------------------

int main(void) {

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinha��o *\n");
    printf("************************************\n");

    int secret_number = 42;
    int guess;
    int attempt = 1;
    int greater = 0;
    int correct = 0;
    double points = 1000;

    while(1) {

        printf("Qual � o seu chute?: ");
        scanf("%d", &guess);
        correct = guess == secret_number;
        greater = guess > secret_number;
        double lostpoints = (guess - secret_number) / 2.0; // utilizamos 2.0 para a conta n�o resultar em um
        // valor truncado. Caso fosse 2, o interpratador far� a conta com n�meros inteiros e o resultado ser� int
        // para resolvermos, basta transformar um dos n�meros em um valor de ponto flutuante, o que far� com que
        // a conta seja feita como um valor de ponto flutuante. Essa � uma das maneiras. 
        points = points - lostpoints; 

        if(guess < 0) {
            printf("-----------------------------------------------------------------\n"); 
            printf("Valor inv�lido: N�mero Negativo >:(\n");
            printf("N�o aceitamos negatividade por aqui. Tente novamente! E dessa vez, \n"); 
            printf("\n*************\nCERTIFIQUE-SE\n*************\n\nde ser positivo.\n");
            printf("-----------------------------------------------------------------\n"); 
            continue;
        }
        	
        if(correct) {
            printf("Parab�ns! Voc� acertou na sua %da tentativa!\n", attempt);
            break;
        } else if (greater) {
            printf("Seu chute foi maior que o n�mero secreto!\n");
        } else {
            printf("Seu chute foi menor que o n�mero secreto!\n");
        }

        attempt++;
    }
    printf("Fim de jogo! ");
    printf("Voc� fez %f pontos\n", points);
}


