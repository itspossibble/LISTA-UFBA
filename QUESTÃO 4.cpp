#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100

int main() {
    char nomes[MAX_CLIENTES][50];
    int idades[MAX_CLIENTES];
    float indenizacoes[MAX_CLIENTES];

    int numClientes;

    printf("Quantos clientes deseja cadastrar? (maximo %d): ", MAX_CLIENTES);
    scanf("%d", &numClientes);
    for (int i = 0; i < numClientes; ++i) {
        printf("\n Dados do Cliente %d:\n", i + 1);
        printf("Nome completo: ");
        scanf(" %[^\n]s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Valor base de indenizacao: ");
        scanf("%f", &indenizacoes[i]);
        if (idades[i] <= 12) {
            indenizacoes[i] *= 1.3;  
        } else if (idades[i] >= 13 && idades[i] <= 49) {
            indenizacoes[i] *= 1.1; 
        } else if (idades[i] >= 50 && idades[i] <= 65) {
            indenizacoes[i] *= 1.15; 
        } else {
            indenizacoes[i] *= 1.35; 
        }
    }

    printf("\nResultados:\n");
    printf("%-30s %-10s %-20s\n", "Nome do Paciente", "Idade", "Valor da Indenização");

    for (int i = 0; i < numClientes; ++i) {
        printf("%-30s %-10d %-20.2f\n", nomes[i], idades[i], indenizacoes[i]);
    }

    return 0;
}

