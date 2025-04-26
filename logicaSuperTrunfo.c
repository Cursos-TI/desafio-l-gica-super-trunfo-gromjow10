#include <stdio.h>

int main() {
    char estado01[50], estado02[50], estado03[50], estado04[50]; 
    char cidadeA01[50], cidadeA02[50], cidadeA03[50], cidadeA04[50];
    char cidadeB01[50], cidadeB02[50], cidadeB03[50], cidadeB04[50];
    char cidadeC01[50], cidadeC02[50], cidadeC03[50], cidadeC04[50];
    char cidadeD01[50], cidadeD02[50], cidadeD03[50], cidadeD04[50];
    int populacaoA01, populacaoA02, populacaoA03, populacaoA04;
    int populacaoB01, populacaoB02, populacaoB03, populacaoB04;
    int populacaoC01, populacaoC02, populacaoC03, populacaoC04;
    int populacaoD01, populacaoD02, populacaoD03, populacaoD04;
    int turismoA01, turismoA02, turismoA03, turismoA04;
    int turismoB01, turismoB02, turismoB03, turismoB04;
    int turismoC01, turismoC02, turismoC03, turismoC04;
    int turismoD01, turismoD02, turismoD03, turismoD04;
    float areaA01, areaA02, areaA03, areaA04;
    float areaB01, areaB02, areaB03, areaB04;
    float areaC01, areaC02, areaC03, areaC04;
    float areaD01, areaD02, areaD03, areaD04;
    float pibA01, pibA02, pibA03, pibA04;
    float pibB01, pibB02, pibB03, pibB04;
    float pibC01, pibC02, pibC03, pibC04;
    float pibD01, pibD02, pibD03, pibD04;
    float pibpercaptA01, pibpercaptA02, pibpercaptA03, pibpercaptA04;
    float pibpercaptB01, pibpercaptB02, pibpercaptB03, pibpercaptB04;
    float pibpercaptC01, pibpercaptC02, pibpercaptC03, pibpercaptC04;
    float pibpercaptD01, pibpercaptD02, pibpercaptD03, pibpercaptD04;
    float densidadeA01, densidadeA02, densidadeA03, densidadeA04;
    float densidadeB01, densidadeB02, densidadeB03, densidadeB04;
    float densidadeC01, densidadeC02, densidadeC03, densidadeC04;
    float densidadeD01, densidadeD02, densidadeD03, densidadeD04;
    float superA01, superA02;
    float resultadoA01, resultadoA02;

    // Leitura dos dados (igual você mandou)
    printf("digite o nome do estado 1: \n");
    scanf("%s", estado01);

    printf("digite o nome da cidade 1: \n");
    scanf("%s", cidadeA01);

    printf("digite o nome da cidade 2: \n");
    scanf("%s", cidadeA02);

    printf("digite a quantidade de habitantes da cidade 1: \n");
    scanf("%d", &populacaoA01);

    printf("digite a quantidade de habitantes da cidade 2: \n");
    scanf("%d", &populacaoA02);

    printf("digite a area da cidade 1: \n");
    scanf("%f", &areaA01);

    printf("digite a area da cidade 2: \n");
    scanf("%f", &areaA02);

    printf("digite o pib da cidade 1: \n");
    scanf("%f", &pibA01);

    printf("digite o pib da cidade 2: \n");
    scanf("%f", &pibA02);

    printf("digite a quantidade de pontos turisticos da cidade 1: \n");
    scanf("%d", &turismoA01);

    printf("digite a quantidade de pontos turisticos da cidade 2: \n");
    scanf("%d", &turismoA02);

    // Cálculos
    pibpercaptA01 = pibA01 / populacaoA01;
    pibpercaptA02 = pibA02 / populacaoA02;
    densidadeA01 = populacaoA01 / areaA01;
    densidadeA02 = populacaoA02 / areaA02;
    superA01 = populacaoA01 + turismoA01 + areaA01 + pibA01 + pibpercaptA01 + 1 / densidadeA01;
    superA02 = populacaoA02 + turismoA02 + areaA02 + pibA02 + pibpercaptA02 + 1 / densidadeA02;

    // Mostra os dados
    printf("nome do estado 1: %s\n", estado01);
    printf("nome da cidadeA01: %s\n", cidadeA01);
    printf("dados da cidadeA01:\n população: %d\n - area: %.2f\n - pib: %.2f\n - pontos turisticos: %d\n - densidade populacional: %.2f\n - pib per capita: %.2f\n - super poder: %.2f\n", populacaoA01, areaA01, pibA01, turismoA01, densidadeA01, pibpercaptA01, superA01);
    printf("nome da cidadeA02: %s\n", cidadeA02);
    printf("dados da cidadeA02:\n população: %d\n - area: %.2f\n - pib: %.2f\n - pontos turisticos: %d\n - densidade populacional: %.2f\n - pib per capita: %.2f\n - super poder: %.2f\n", populacaoA02, areaA02, pibA02, turismoA02, densidadeA02, pibpercaptA02, superA02);

    // Agora a batalha usando IF e ELSE:
    printf("\nAGORA VAMOS PARA O RESULTADO DA BATALHA ENTRE AS DUAS CIDADES:\n");

    if (populacaoA01 > populacaoA02) {
        printf("Cidade %s tem a maior população!\n", cidadeA01);
    } else if (populacaoA02 > populacaoA01) {
        printf("Cidade %s tem a maior população!\n", cidadeA02);
    } else {
        printf("As duas cidades têm a mesma população!\n");
    }

    if (areaA01 > areaA02) {
        printf("Cidade %s tem a maior área!\n", cidadeA01);
    } else if (areaA02 > areaA01) {
        printf("Cidade %s tem a maior área!\n", cidadeA02);
    } else {
        printf("As duas cidades têm a mesma área!\n");
    }

    if (pibA01 > pibA02) {
        printf("Cidade %s tem o maior PIB!\n", cidadeA01);
    } else if (pibA02 > pibA01) {
        printf("Cidade %s tem o maior PIB!\n", cidadeA02);
    } else {
        printf("As duas cidades têm o mesmo PIB!\n");
    }

    if (turismoA01 > turismoA02) {
        printf("Cidade %s tem mais pontos turísticos!\n", cidadeA01);
    } else if (turismoA02 > turismoA01) {
        printf("Cidade %s tem mais pontos turísticos!\n", cidadeA02);
    } else {
        printf("As duas cidades têm a mesma quantidade de pontos turísticos!\n");
    }

    if (densidadeA01 > densidadeA02) {
        printf("Cidade %s tem maior densidade populacional!\n", cidadeA01);
    } else if (densidadeA02 > densidadeA01) {
        printf("Cidade %s tem maior densidade populacional!\n", cidadeA02);
    } else {
        printf("As duas cidades têm a mesma densidade!\n");
    }

    if (pibpercaptA01 > pibpercaptA02) {
        printf("Cidade %s tem maior PIB per capita!\n", cidadeA01);
    } else if (pibpercaptA02 > pibpercaptA01) {
        printf("Cidade %s tem maior PIB per capita!\n", cidadeA02);
    } else {
        printf("As duas cidades têm o mesmo PIB per capita!\n");
    }

    if (superA01 > superA02) {
        printf("Cidade %s tem o maior super poder!\n", cidadeA01);
    } else if (superA02 > superA01) {
        printf("Cidade %s tem o maior super poder!\n", cidadeA02);
    } else {
        printf("As duas cidades têm o mesmo super poder!\n");
    }

    return 0;
}
