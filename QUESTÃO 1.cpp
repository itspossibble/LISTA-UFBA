#include <stdio.h>

int main() {
    int lista[10];

    printf("Digite 10 inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Digite o %dº inteiro: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("Lista de inteiros: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", lista[i]);
    }

    return 0;
}

