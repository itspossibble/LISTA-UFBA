#include <stdio.h>

#define TAMANHO_LISTA 15

void exibirListaDireta(float lista[], int tamanho) {
    printf("\nLista na Ordem Direta:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%.2f ", lista[i]);
    }
    printf("\n");
}
void exibirListaInversa(float lista[], int tamanho) {
    printf("\n Lista na Ordem Inversa:\n");
    for (int i = tamanho - 1; i >= 0; --i) {
        printf("%.2f ", lista[i]);
    }
    printf("\n");
}
int main() {
    float lista[TAMANHO_LISTA];
    int codigo;
    printf("Digite um codigo numérico (0 para encerrar, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    while (codigo != 0) {
        printf("Digite 15 numeros reais:\n");
        for (int i = 0; i < TAMANHO_LISTA; ++i) {
            printf("Elemento %d: ", i + 1);
            scanf("%f", &lista[i]);
        }
        if (codigo == 1) {
            exibirListaDireta(lista, TAMANHO_LISTA);
        } else if (codigo == 2) {
            exibirListaInversa(lista, TAMANHO_LISTA);
        } else {
            printf("Codigo invalido.\n");
        }
        printf("\n Digite um novo codigo numerico (0 para encerrar, 1 para ordem direta, 2 para ordem inversa): ");
        scanf("%d", &codigo);
    }

    return 0;
}

