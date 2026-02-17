#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  //Essas abaixo sao as variaveis e tipos de variaveis utilizadas para armezenar infos das cartas

    char estado[20], codigo[20], nomecidade[20], opcao[5];
    int populacao, pontosturisticos, populacao2;
    float area, pib;

  
  //Abaixo entrada de dados referente ao estado, codigo, nome da cidade, populacao, pontos turisticos, area e pib da carta 01
  //Usei o printf com espaco apenas para ter uma melhor visualizacao

    printf("Para comecarmos o cadastro da sua carta, informe por favor o nome do estado: ");
    scanf("%s", estado);
    printf(" \n");
    printf("Em seguida, informe por favor o codigo: ");
    scanf("%s", codigo);
    printf(" \n");
    printf("Insira o nome da cidade: ");
    scanf("%s", nomecidade);
    printf(" \n");
    printf("Agora nos informe por favor a populacao que consta em sua carta: ");
    scanf("%d", &populacao);
    printf(" \n");
    printf("Digite a area (km²): ");
    scanf("%f", &area);
    printf(" \n");
    printf("Estamos quase terminando, preicisamos que informe o PIB: R$ ");
    scanf("%f", &pib);
    printf(" \n");
    printf("Para terminar, informe o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    printf(" \n");
    printf("Parabens! Voce concluiu o cadasdro da carta com sucesso. Confira abaixo sua carta cadastrada.\n");
    printf(" \n");

  //Abaixo saida de dados mostrando a carta 01 cadastrada

    printf("Carta 01:\n");
    printf(" \n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area (km²): %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos);
    printf(" \n");

  //Abaixo entrada de dados referente ao estado, codigo, nome da cidade, populacao, pontos turisticos, area e pib da carta 02

    printf("Cadastro carta 02: \n");
    printf(" \n");
    printf("Para comecarmos o cadastro da sua carta, informe por favor o nome do estado: ");
    scanf("%s", estado);
    printf(" \n");
    printf("Em seguida, informe por favor o codigo: ");
    scanf("%s", codigo);
    printf(" \n");
    printf("Insira o nome da cidade: ");
    scanf("%s", nomecidade);
    printf(" \n");
    printf("Agora nos informe por favor a populacao que consta em sua carta: ");
    scanf("%d", &populacao2);
    printf(" \n");
    printf("Digite a area (km²): ");
    scanf("%f", &area);
    printf(" \n");
    printf("Estamos quase terminando, preicisamos que informe o PIB: R$ ");
    scanf("%f", &pib);
    printf(" \n");
    printf("Para terminar, informe o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    printf(" \n");
    printf("Parabens! Voce concluiu o cadasdro da carta com sucesso. Confira abaixo sua carta cadastrada.\n");
    printf(" \n");

    //Abaixo saida de dados mostrando a carta 02 cadastrada

    printf("Carta 02:\n");
    printf(" \n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao2);
    printf("Area (km²): %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos);

return 0;
} 
