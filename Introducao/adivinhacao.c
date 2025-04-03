#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// chcp 1252  <-----------------------------------
#define ONLINE 1
#define OFFLINE 0
#define EASY 20
#define MEDIUM 15
#define HARD 6

int main(void) {

    printf("                                                                                            .... \n");
    printf("                                                                                          .'' .''' \n");
    printf("                                                          .                             .'   : \n");
    printf("                                                          \\\\                          .:    : \n");
    printf("                                                           \\\\                        _:    :       ..----.._ \n");
    printf("                                                            \\\\                    .:::.....:::.. .'         ''. \n");
    printf("                                                             \\\\                 .'  #-. .-######'     #        '. \n");
    printf("                                                              \\\\                 '.##'/ ' ################       : \n");
    printf("                                                               \\\\                  #####################         : \n");
    printf("                                                                \\\\               ..##.-.#### .''''###'.._        : \n");
    printf("                                                                 \\\\             :--:########:            '.    .' : \n");
    printf("                                                                  \\\\..__...--.. :--:#######.'   '.         '.     : \n");
    printf("                  ************************************            :     :  : : '':'-:'':'::        .         '.  .'\n");
    printf("                  * Bem-vindo ao Jogo de Adivinha��o *            '---'''..: :    ':    '..'''.      '.        :'\n");
    printf("                  ************************************               \\\\  :: : :     '      ''''''.     '.      .: \n");
    printf("                                                                      \\\\ ::  : :     '            '.      '      : \n");
    printf("                                                                       \\\\::   : :           ....' ..:       '     '. \n");
    printf("                                                                        \\\\::  : :    .....####\\\\ .~~.:.             : \n");
    printf("                                                                         \\\\':.:.:.:'#########.===. ~ |.'-.   . '''.. : \n");
    printf("                                                                          \\\\    .'  ########## \\ \\ _.' '. '-.       '''. \n");
    printf("                                                                          :\\\\  :     ########   \\ \\      '.  '-.        : \n");
    printf("                                                                         :  \\\\'    '   #### :    \\ \\      :.    '-.      : \n");
    printf("                                                                        :  .'\\\\   :'  :     :     \\ \\       :      '-.    : \n");
    printf("                                                                       : .'  .\\\\  '  :      :     :\\ \\       :        '.   : \n");
    printf("                                                                       ::   :  \\\\'  :.      :     : \\ \\      :          '. : \n");
    printf("                                                                       ::. :    \\\\  : :      :    ;  \\ \\     :           '.: \n");
    printf("                                                                        : ':    '\\\\ :  :     :     :  \\:\\     :        ..' \n");
    printf("                                                                           :    ' \\\\ :        :     ;  \\|      :   .''' \n");
    printf("                                                                           '.   '  \\\\:                         :.'' \n");
    printf("                                                                            .:..... \\\\:       :            ..'' \n");
    printf("                                                                           '._____|'.\\\\......'''''''.:..''' \n");
    printf("                                                                                      \\\\ \n");
    
    // int secret_number = 42;
    int guess;
    int nivel;
    int attempts = 1;
    int total_attempt = 0;
    int greater = 0;
    int correct = 0;
    double points = 1000;
    int seconds = time(0);
    int max, min;
    char replay;
    int game = ONLINE;

    srand(seconds);
    int random = rand();

    while(game == ONLINE) {

        printf("Escolha o range\n");
        printf("Max: ");
        scanf("%d", &max);
        printf("Min: ");
        scanf("%d", &min);
    
        int secret_number = random % (max - min) + min;
    
        printf("Rand: %d\n", rand);
        printf("Secret number: %d\n", secret_number);
    
        printf("Escolha a dificuldade\n");
        printf("F�cil (1)\nM�dio (2)\nDif�cil (3)\n");
        while(total_attempt == 0) {
    
            printf("Escolha: ");
    
            if(scanf("%d", &nivel) != 1) { // checa se a entrada � um n�mero int
                printf("Valor inv�lido. Digite um n�mero.\n");
    
                while(getchar() != '\n'); // limpa o buffer, evita loop infinito do while
                continue;
            }
    
            switch (nivel) {
                case 1:
                    total_attempt = EASY;
                    break;
                case 2:
                    total_attempt = MEDIUM;
                    break;
                case 3:
                    total_attempt = HARD;
                    break;
                default:
                    printf("Valor inv�lido. Try Again.\n");
            }
        }
    
        while(1) {
            printf("-> Tentativa %d de %d\n", attempts, total_attempt);
            printf("Qual � o seu chute?: ");
            scanf("%d", &guess);
            correct = guess == secret_number;
            greater = guess > secret_number;
            double lostpoints = abs(guess - secret_number) / 2.0;
            points = points - lostpoints;
    
            if(guess < 0) {
                printf("-----------------------------------------------------------------\n"); 
                printf("Valor inv�lido: N�mero Negativo >:(\n");
                printf("-----------------------------------------------------------------\n"); 
                continue;
            }
            
            if(attempts != total_attempt) {
                if(correct) {
                    printf("Parab�ns! Voc� acertou na sua %da tentativa!\n", attempts);
                    break;
                } else if (greater) {
                    printf("Seu chute foi maior que o n�mero secreto!\n");
                } else {
                    printf("Seu chute foi menor que o n�mero secreto!\n");
                }
            }
    
            if(attempts == total_attempt) {
                printf("Todas as suas tentativas acabaram. O jogo acabou na sua %da e �ltima tentativa.\n", attempts);
                break;
            }
    
            attempts++;
        }
    
        printf("Fim de jogo!\n");
        if(correct)
            printf("Voc� fez %f pontos.\n", points);
        else
            printf("Seus pontos s�o: 0");
    
        printf("Quer jogar novamente? [y/N]:\n");
        fflush(stdin); // limpa o buffer de entrada 
        scanf("%c", &replay);
        if(replay == 'y' || replay == 'Y') {
            game == ONLINE;
            nivel = 0;
            total_attempt = 0;
            attempts = 0;
        }
        else 
            game = OFFLINE;
    }

    printf("Jogo encerrado.");
}
