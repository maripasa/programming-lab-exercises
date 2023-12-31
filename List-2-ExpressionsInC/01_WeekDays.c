// Questão 1

#include <stdio.h>

int main() {
    int input;

    // Apresentação do programa
    puts("\n==== CONVERSOR: 'INTEIRO' -> 'DIAS DA SEMANA' ====\n");

    while (1) {
        printf("\nDigite um inteiro (1-7 para dias da semana, 0 para sair): ");
        scanf("%d", &input);

        if (input == 0) {
            // Encerra o programa se o usuário digitar 0
            puts("\nComando Encerrado.");
            break;
        }

        switch (input) {
            case 1:
                puts("1, Domingo\n");
                break;
            case 2:
                puts("2, Segunda\n");
                break;
            case 3:
                puts("3, Terça\n");
                break;
            case 4:
                puts("4, Quarta\n");
                break;
            case 5:
                puts("5, Quinta\n");
                break;
            case 6:
                puts("6, Sexta\n");
                break;
            case 7:
                puts("7, Sábado\n");
                break;
            default:
                // Mensagem de erro para entrada inválida
                puts("Número de dia não válido\n");
        }
    }
    return 0;
}