#include <stdio.h>

#define TAMANHO_LISTA 5

void exibirLista(int lista[], int tamanho, const char *tipo) {
    printf("\nLista de numeros %s:\n", tipo);
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int listaPares[TAMANHO_LISTA];
    int listaImpares[TAMANHO_LISTA];
    int valor, contadorPares = 0, contadorImpares = 0;
    while (1) {
        printf("Digite um valor inteiro (ou digite 0 para encerrar): ");
        scanf("%d", &valor);

        if (valor == 0) {
            if (contadorPares > 0) {
                exibirLista(listaPares, contadorPares, "pares");
            }
            if (contadorImpares > 0) {
                exibirLista(listaImpares, contadorImpares, "Impares");
            }
            break;
        }

        if (valor % 2 == 0) {
            listaPares[contadorPares] = valor;
            contadorPares++;
        } else {
            listaImpares[contadorImpares] = valor;
            contadorImpares++;
        }
        if (contadorPares == TAMANHO_LISTA) {
            exibirLista(listaPares, contadorPares, "pares");
            contadorPares = 0;
        }
        if (contadorImpares == TAMANHO_LISTA) {
            exibirLista(listaImpares, contadorImpares, "Impares");
            contadorImpares = 0;
        }
    }

    return 0;
}

