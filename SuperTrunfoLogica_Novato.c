#include <stdio.h>

int main (){

    //Essas abaixo sao as variaveis e tipos de variaveis utilizadas

    char estado[20], codigo[20],nomecidade[20], opcao[5];
    char estado2[20], codigo2[20],nomecidade2[20], opcao2[5];
    int  pontosturisticos;
    int  pontosturisticos2;
    unsigned long int populacao, populacao2;
    float area, area2;
    double pib, pib2;

    //Abaixo entrada de dados referente ao estado, codigo, nome da cidade, populacao, pontos turisticos, area e pib da carta 01
    
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
    scanf("%lu", &populacao);
    printf(" \n");
    printf("Digite a area (km²): ");
    scanf("%f", &area);
    printf(" \n");
    printf("Estamos quase terminando, preicisamos que informe o PIB: R$ ");
    scanf("%lf", &pib);
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
    printf("Populacao: %.2lu\n", populacao);
    printf("Area (km²): %.2f\n", area);
    printf("PIB: %.2lf bilhões de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos);

    // calculando densidade populacional carta 1

    float densidade, pibperCap;
    float densidade2, pibperCap2;

    densidade = (double) populacao / area;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade);

    //calculando o pib per Capita carta 1
    
    pibperCap = (double) pib / populacao;

    printf("PIB per Capita: R$ %.2f reais\n", pibperCap);

    // variaveis super poder

    float superPoder, superPoder2;

    // super poder carta 1

    superPoder = (long double) populacao + area + pib + pontosturisticos + pibperCap - densidade;

    printf("Super Poder: %.2lf\n", superPoder);
    printf(" \n");

    /*Abaixo entrada de dados referente ao estado, codigo, nome da cidade
    populacao, pontos turisticos, area e pib da carta 02*/

    printf("Cadastro carta 02: \n");
    printf(" \n");
    printf("Para comecarmos o cadastro da sua carta, informe por favor o nome do estado: ");
    scanf("%s", estado2);
    printf(" \n");
    printf("Em seguida, informe por favor o codigo: ");
    scanf("%s", codigo2);
    printf(" \n");
    printf("Insira o nome da cidade: ");
    scanf("%s", nomecidade2);
    printf(" \n");
    printf("Agora nos informe por favor a populacao que consta em sua carta: ");
    scanf("%lu", &populacao2);
    printf(" \n");
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf(" \n");
    printf("Estamos quase terminando, preicisamos que informe o PIB: R$ ");
    scanf("%lf", &pib2);
    printf(" \n");
    printf("Para terminar, informe o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    printf(" \n");
    printf("Parabens! Voce concluiu o cadasdro da carta com sucesso. Confira abaixo sua carta cadastrada.\n");
    printf(" \n");

    //Abaixo saida de dados mostrando a carta 02 cadastrada

    printf("Carta 02:\n");
    printf(" \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %.2lu\n", populacao2);
    printf("Area (km²): %.2f\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);

    // calculando densidade populacional CARTA 2

    densidade2 = (double) populacao2 / area2;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    //calculando o pib per Capita CARTA 2
    
    pibperCap2 = (double) pib2 / populacao2;

    printf("PIB per Capita: R$ %.2f reais\n", pibperCap2);

    // super poder carta 02

    superPoder2 = (long double) populacao2 + area2 + pib2 + pontosturisticos2 + pibperCap2 - densidade2;

    printf("Super Poder: %.2lf\n", superPoder2);
    printf(" \n");

    // comparacao das cartas, atributo escolhido PIB

    printf("--- HORA DO DUELO ---\n");
    printf(" \n");
    printf("Comparacao de cartas (Atributo: PIB)\n");
    printf(" \n");
    printf("Carta 1: %s (%s): R$ %.2lf\n", estado, codigo, pib);
    printf("Carta 2: %s (%s): R$ %.2lf\n", estado2, codigo2, pib2);
    printf(" \n");

    // logica if if-else

    if (pib > pib2) {
        printf("Resultado: A carta 01 %s %s venceu!", estado, codigo);
    }

    else if (pib2 > pib) {
        printf("Resultado: A carta 02 %s %s venceu!", estado2, codigo2);
    }

    else {
        printf("Houve um empate!");
    }

    return 0;
}
