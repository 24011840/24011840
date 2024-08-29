#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeProduto[50];
    int quantidade;
    float precoUnitario, valorTotal, valorTotalDia = 0;
    char opcao;

    do {
        printf("Digite o nome do produto: ");
        scanf("%s", nomeProduto);
        printf("Digite a quantidade vendida: ");
        scanf("%i", &quantidade);
        printf("Digite o preco unitario do produto: ");
        scanf("%f", &precoUnitario);

    valorTotal = quantidade * precoUnitario;
        printf("Valor total da venda: R$ %.2f\n", valorTotal);

    valorTotalDia += valorTotal;

        printf("Deseja registrar outra venda? (s/n): ");
        scanf(" %c", &opcao);
    } while (opcao == 's' || opcao == 'S');

    printf("Valor total arrecadado no dia: R$ %.2f\n", valorTotalDia);

    return 0;
}
