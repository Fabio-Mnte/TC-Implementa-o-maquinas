#include <stdio.h>

// Função recursiva para calcular o fatorial
int calcularFatorial(int n) {
    // Caso base: fatorial de 0 é 1
    if (n == 0) {
        return 1;
    } else {
        // Chamada recursiva para calcular o fatorial de n-1
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int num;
    int opcao;
    int termina = 0;

    printf("Selecione uma opcao:\n");
    printf("1. Calculo de fatorial\n");
    printf("2. Sair\n");

    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite um numero para calcular o fatorial: ");
        scanf("%d", &num);

        // Verifica se o número é negativo
        if (num < 0) {
            printf("Erro: Fatorial de numero negativo nao definido.\n");
        } else {
            // Calcula e exibe o fatorial
            printf("O fatorial de %d e: %d\n", num, calcularFatorial(num));
        }
        break;
    case 2:
        termina = 1; 
        break;
    default:
        printf("Entrada Invalida \n");
        break;
    }
    if(termina!= 0){
        printf("encerrando");
    } else
    {
        main(); //reinicia o codigo
    }
    

    return 0;
}