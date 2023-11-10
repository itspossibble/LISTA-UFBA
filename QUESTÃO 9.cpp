#include <stdio.h>

#define TAMANHO_GABARITO 20
#define NUM_ALUNOS 50

float calcularNota(char gabarito[], char respostas[]) {
    int acertos = 0;
    for (int i = 0; i < TAMANHO_GABARITO; ++i) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }
    return acertos * 0.5;  
}

int main() {
    char gabarito[TAMANHO_GABARITO];

    printf("Digite o gabarito da prova (20 caracteres): ");
    for (int i = 0; i < TAMANHO_GABARITO; ++i) {
        scanf(" %c", &gabarito[i]);
    }

    for (int aluno = 0; aluno < NUM_ALUNOS; ++aluno) {
        char respostas[TAMANHO_GABARITO];

        char nome[100];
        printf("\nDigite o nome do aluno %d: ", aluno + 1);
        scanf(" %[^\n]s", nome);

        printf("Digite as respostas do aluno %d (20 caracteres): ", aluno + 1);
        for (int i = 0; i < TAMANHO_GABARITO; ++i) {
            scanf(" %c", &respostas[i]);
        }
        float nota = calcularNota(gabarito, respostas);
        printf("Número de acertos para %s: %d\n", nome, (int)(nota / 0.5));
                if (nota >= 6.0) {
            printf("Nota final: %.2f - APROVADO\n", nota);
        } else {
            printf("Nota final: %.2f - REPROVADO\n", nota);
        }
    }

    return 0;
}

