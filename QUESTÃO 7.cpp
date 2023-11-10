#include <stdio.h>

int main() {
    int lista[10];
    printf("Digite 10 elementos inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &lista[i]);
    }
    int qtdPares = 0;
    for (int i = 0; i < 10; ++i) {
        if (lista[i] % 2 == 0) {
            qtdPares++;
        }
    }
    printf("Quantidade de valores pares na lista: %d\n", qtdPares);

    return 0;
}

