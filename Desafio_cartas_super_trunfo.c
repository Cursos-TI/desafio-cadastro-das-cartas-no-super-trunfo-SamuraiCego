#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// Variaveis dos atributos
    char estado1, estado2;
    char cidade1[20], cidade2[20], codigo1[4], codigo2[4];
    int populaçao1, populaçao2, pontos1, pontos2;
    float area1, area2, PIB1, PIB2;

// Solicitando o usuário que insira os atributos das cartas

// Solicitação do Estado da Carta
    printf("Insira o Estado da Carta 1: \n");
    scanf("%c", &estado1);

// Solicitação do Código da Carta

    printf("Insira o Código da Carta: \n");
    scanf("%s", &codigo1);

// Solicitação do Nome da Cidade

    printf("Insira o Nome da Cidade: \n");
    scanf("%s", &cidade1);

// Solicitação da população da cidade

    printf("Insira a população da cidade: \n");
    scanf("%d", &populaçao1);

// Solicitação da Área em Km²

    printf("Insira a Área da Cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

// Solicitação do PIB da cidade

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB1);

// Solicitação de Quantidade de Pontos Turisticos

    printf("Insira a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pontos1);

// Exibindo os resultados da Carta 1M

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: $s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);


    return 0;
}
