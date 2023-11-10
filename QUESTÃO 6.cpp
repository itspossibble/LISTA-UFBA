#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100

struct Cliente {
    char nomeCompleto[100];
    char rg[15];
    char cpf[15];
    char telefone[20];
};

int main() {
    struct Cliente clientes[MAX_CLIENTES];

    int numClientes;

    printf("Quantos clientes deseja cadastrar? (maximo %d): ", MAX_CLIENTES);
    scanf("%d", &numClientes);

    if (numClientes <= 0 || numClientes > MAX_CLIENTES) {
        printf("Número inválido de clientes.\n");
        return 1;  // Código de erro
    }

    for (int i = 0; i < numClientes; ++i) {
        printf("\nDados do Cliente %d:\n", i + 1);
        printf("Nome completo: ");
        scanf(" %[^\n]s", clientes[i].nomeCompleto);
        printf("RG: ");
        scanf("%s", clientes[i].rg);
        printf("CPF: ");
        scanf("%s", clientes[i].cpf);
        printf("Telefone: ");
        scanf("%s", clientes[i].telefone);
    }

    printf("\nResultados:\n");
    printf("%-30s %-15s %-15s %-20s\n", "Nome do Cliente", "RG", "CPF", "Telefone");

    for (int i = 0; i < numClientes; ++i) {
        printf("%-30s %-15s %-15s %-20s\n", clientes[i].nomeCompleto, clientes[i].rg, clientes[i].cpf, clientes[i].telefone);
    }

    return 0;
}

