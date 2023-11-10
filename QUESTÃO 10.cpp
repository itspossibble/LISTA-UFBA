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
    char nomes[NUM_ALUNOS][100];
    float notasFinais[NUM_ALUNOS];

    for (int aluno = 0; aluno < NUM_ALUNOS; ++aluno) {
        char respostas[TAMANHO_GABARITO];

        printf("\nDigite o nome do aluno %d: ", aluno + 1);
        scanf(" %[^\n]s", nomes[aluno]);

        printf("Digite as respostas do aluno %d (20 caracteres): ", aluno + 1);
        for (int i = 0; i < TAMANHO_GABARITO; ++i) {
            scanf(" %c", &respostas[i]);
        }

        notasFinais[aluno] = calcularNota(gabarito, respostas);
    }

    printf("\nResultados:\n");
    printf("%-30s %-15s\n", "Nome do Aluno", "Nota Final");

    for (int aluno = 0; aluno < NUM_ALUNOS; ++aluno) {
        printf("%-30s %.2f - ", nomes[aluno], notasFinais[aluno]);

        if (notasFinais[aluno] >= 6.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    return 0;
}

