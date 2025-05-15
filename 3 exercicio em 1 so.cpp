#include <stdio.h>


int main() {
    int escolha;
    void exercicio1014();
    void exercicio1020();
    void exercicio1052();

    printf("Escolha o exercicio que deseja executar:\n");
    printf("1 - exercicio 1014\n");
    printf("2 - exercicio 1020\n");
    printf("3 - exercicio 1052\n");
    printf("Digite a sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            exercicio1014();
            break;
        case 2:
            exercicio1020();
            break;
        case 3:
            exercicio1052();
            break;
        default:
            printf("Opcao invalida. Escolha 1, 2 ou 3.\n");
    }

    return 0;
}


// Exercício 1: Consumo médio do automóvel
void exercicio1014() {
    int distancia;
    float combustivel;

    printf("Digite a distancia percorrida (km): ");
    scanf("%d", &distancia);

    printf("Digite o total de combustivel gasto (litros): ");
    scanf("%f", &combustivel);

    float consumo = distancia / combustivel;
    printf("Consumo medio: %.2f km/l\n", consumo);
}


// Exercício 2: Idade em anos, meses e dias
void exercicio1020() {
    int totaldias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &totaldias);

    anos = totaldias / 365;
    meses = (totaldias % 365) / 30;
    dias = (totaldias % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}


// Exercício 3: Nome do mês (sem const char*)
void exercicio1052() {
    int numeromes;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &numeromes);

    switch (numeromes) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Numero invalido! Digite um numero entre 1 e 12.\n");
    }
}

