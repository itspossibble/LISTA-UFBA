#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0, media;
    float maior, menor;
    int qtdPositivos = 0, qtdNegativos = 0;
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] > 0) {
            qtdPositivos++;
        } else if (numeros[i] < 0) {
            qtdNegativos++;
        }
    }
    media = soma / 10;
    printf("\nResultados:\n");
    printf("a) Media dos elementos: %.2f\n", media);
    printf("b) Maior elemento: %.2f\n", maior);
    printf("   Menor elemento: %.2f\n", menor);
    printf("c) Quantidade de elementos positivos: %d\n", qtdPositivos);
    printf("   Quantidade de elementos negativos: %d\n", qtdNegativos);

    return 0;
}

