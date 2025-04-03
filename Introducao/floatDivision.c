#include <stdio.h>

int main(void) {

    int a = 3;
    int b = 2;

    double resultado = a / b; // resultará em um inteiro truncado.
    printf("resultado: %.2f\n", resultado);

    // para um resultado de ponto flutuante, teremos que utilizar algo chamado de "Casting"

    resultado = (double) a / (double) b;
    printf("resultado: %.2f\n", resultado);



}