#include <stdio.h>
#include <math.h>

#define MAX_N 100

float calcularNorma(float vetor[], int tamanho) {
    float somaQuadrados = 0;

    for (int i = 0; i < tamanho; ++i) {
        somaQuadrados += vetor[i] * vetor[i];
    }

    return sqrt(somaQuadrados);
}

void somarVetores(float vetor1[], float vetor2[], float vetor3[], float resultado[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        resultado[i] = vetor1[i] + vetor2[i] + vetor3[i];
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos vetores (N, maximo %d): ", MAX_N);
    scanf("%d", &tamanho);

    if (tamanho <= 0 || tamanho > MAX_N) {
        printf("Tamanho inválido.\n");
        return 1;  
    }

    float vetor1[MAX_N], vetor2[MAX_N], vetor3[MAX_N];

    printf("\nDigite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor1[i]);
    }

    printf("\n Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor2[i]);
    }

    printf("\n Digite os elementos do terceiro vetor:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor3[i]);
    }

    float normaVetor1 = calcularNorma(vetor1, tamanho);
    float normaVetor2 = calcularNorma(vetor2, tamanho);
    float normaVetor3 = calcularNorma(vetor3, tamanho);

    printf("\n Norma do primeiro vetor: %.2f\n", normaVetor1);
    printf("Norma do segundo vetor: %.2f\n", normaVetor2);
    printf("Norma do terceiro vetor: %.2f\n", normaVetor3);

    if (normaVetor1 > normaVetor2 && normaVetor1 > normaVetor3) {
        printf("O primeiro vetor tem a maior norma.\n");
    } else if (normaVetor2 > normaVetor1 && normaVetor2 > normaVetor3) {
        printf("O segundo vetor tem a maior norma.\n");
    } else {
        printf("O terceiro vetor tem a maior norma.\n");
    }

    float vetorSoma[MAX_N];
    somarVetores(vetor1, vetor2, vetor3, vetorSoma, tamanho);

    printf("\nVetor Soma:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%.2f ", vetorSoma[i]);
    }
    printf("\n");

    return 0;
}

