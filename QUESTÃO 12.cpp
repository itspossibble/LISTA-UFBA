#include <stdio.h>

int main() {
    int a, b, N;
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o tamanho da lista (N): ");
    scanf("%d", &N);

    if (a > b) {
        printf("Intervalo invalido: a deve ser menor ou igual a b.\n");
        return 1; 
    }
    int lista[N];
    printf("Digite os elementos da lista:\n");
    for (int i = 0; i < N; ++i) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &lista[i]);
    }
    int contagem = 0;
    for (int i = 0; i < N; ++i) {
        if (lista[i] >= a && lista[i] <= b) {
            contagem++;
        }
    }
    printf("A contagem de elementos no intervalo [%d; %d] é: %d\n", a, b, contagem);

    return 0;
}

