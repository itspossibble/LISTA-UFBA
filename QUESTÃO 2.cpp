#include <stdio.h>

int main() {
    int lista[10];

    printf("Digite 10 inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Digite o %dº inteiro: ", i + 1);
        scanf("%d", &lista[i]);
    }

    int numero;
    printf("Digite um numero para verificar se esta na lista: ");
    scanf("%d", &numero);

    int encontrado = 0;  
    for (int i = 0; i < 10; ++i) {
        if (lista[i] == numero) {
            encontrado = 1;
            break; 
        }
    }
    if (encontrado) {
        printf("O numero %d está na lista.\n", numero);
    } else {
        printf("O numero %d não está na lista.\n", numero);
    }

    return 0;
}

