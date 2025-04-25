#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento 
// do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade,
    // nome, população, área, PIB, número de pontos turísticos.
    char estado[2];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Super Trunfo - Países!!!\n");
    printf("Primeiro, crie as cartas de suas Cidades Favoritas do Brasil\ncom sua devidas características!\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar
    // as entradas do usuário para cada atributo.
    printf("CIDADE 1:\n");
    printf("Qual letra representará o Estado?\n");
    printf("Deve ser uma letra maiúscula de 'A' a 'H'\n (representando um dos oito estados escolhidos): ");
    scanf("%s", estado);
    printf("Qual o código da carta?\n");
    printf("Deve ser representado pela letra maiúscula do estado\nseguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", codigo);
    printf("Qual o nome da cidade?");
    scanf("%s", cidade);
    printf("Qual o número de habitantes da Cidade?");
    scanf("%i", populacao);
    printf("O produto interno bruto(PIB) da Cidade:");
    scanf("%f", pib);

    printf("\n");
    printf("O Estado é: %s\n", estado);
    printf("O Código é: %s\n", codigo);
    printf("A Cidade é: %s\n", cidade);
    printf("A População é: %i\n", populacao);
    printf("O PIB é: %f\n", pib);



    // Solicite ao usuário que insira as informações 
    // de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações
    // das cartas cadastradas de forma clara e organizada.

    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
