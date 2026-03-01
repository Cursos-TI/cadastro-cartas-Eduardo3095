#include <stdio.h>

int main (){

    //Variaveis carta 1

    char estado[20], codigo[20],nomecidade[20], opcao[5];
    int  pontosturisticos;
    unsigned long int populacao;
    float area;
    double pib;

    //Variaveis carta 02

    char estado2[20], codigo2[20],nomecidade2[20], opcao2[5];
    int  pontosturisticos2;
    unsigned long int populacao2;
    float area2;
    double pib2;


    //Abaixo entrada de dados carta 1

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

    // variaveis super poder carta 1

    float superPoder, superPoder2;

    // calculando super poder carta 1

    superPoder = (long double) populacao + area + pib + pontosturisticos + pibperCap - densidade;

    printf("Super Poder: %.2lf\n", superPoder);
    printf(" \n");

    // Abaixo entrada de dados carta 2

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

    // calculando super poder carta 02

    superPoder2 = (long double) populacao2 + area2 + pib2 + pontosturisticos2 + pibperCap2 - densidade2;

    printf("Super Poder: %.2lf\n", superPoder2);
    printf(" \n");

    // Meu intereativo escolha de comparacao

    int comparacaoCartas;

    printf("==== ESCOLHA O ATRIBUTO DE COMPARACAO ====\n");
    printf(" \n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("Qual atributo deseja comparar?: ");
    scanf("%d", &comparacaoCartas);
    printf(" \n");

    switch(comparacaoCartas) {
        case 1:
            printf("Carta 1: %s (%s): Populacao: %.2lu\n", estado, codigo, populacao);
            printf("Carta 2: %s (%s): Populacao: %.2lu\n", estado2, codigo2, populacao2);  
    break;

        case 2:
            printf("Carta 1: %s (%s): Area: %.2f\n", estado, codigo, area);
            printf("Carta 2: %s (%s): Area: %.2f\n", estado2, codigo2, area2);
    break;
        
        case 3:
            printf("Carta 1: %s (%s): PIB R$ %.2lf\n", estado, codigo, pib);
            printf("Carta 2: %s (%s): PIB R$ %.2lf\n", estado2, codigo2, pib2);
    break;
        
        case 4:
            printf("Carta 1: %s (%s): Pontos Turisticos: %d\n", estado, codigo, pontosturisticos);
            printf("Carta 2: %s (%s): Pontos Turisticos: %d\n", estado2, codigo2, pontosturisticos2);
    break;
        case 5:
            printf("Carta 1: %s (%s): Densidade Populacional: %.2f\n", estado, codigo, densidade);
            printf("Carta 2: %s (%s): Densidade Populacional: %.2f\n", estado2, codigo2, densidade2);
    break;
        default:
            printf("Opcao invalida");
    break;

    }
    // Exibindo resultado da comparacao

   if (
    
        (populacao > populacao2) ||
        (area > area2) ||
        (pib > pib2) ||
        (pontosturisticos > pontosturisticos2) ||
        (densidade > densidade2)) {
            printf("CARTA 1 VENCEU!\n");
        }
    else if (
        
        (populacao == populacao2) ||
        (area == area2) ||
        (pib == pib2) ||
        (pontosturisticos == pontosturisticos2) ||
        (densidade == densidade2)) {
            printf("HOUVE UM EMPATE!\n");
        }
        else {
            printf("CARTA 2 VENCEU");
        }
    return 0;
}
