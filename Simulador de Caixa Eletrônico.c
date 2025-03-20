#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL,"");
    float saldo = 1000.0; 
    int opcao;
    float valor;

    do {
        printf(" Escolha uma opção:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Consultar saldo\n");
        printf("4. Sair\n");
        printf("Digite sua opção: \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Valor a depositar: R$ \n");
                scanf("%f", &valor);
                if (valor > 0 ) {
                    printf("Você depositou R$ %.2f.\n", valor);
                    saldo = saldo + valor;
                } else {
                    printf("Valor de depósito inválido.\n");
                }
                break;

            case 2:
                printf("Valor a sacar: R$ \n");
                scanf("%f", &valor);
                if (valor > 0 && valor < saldo) {
                    printf("Você sacou R$ %.2f.\n", valor);
                    saldo = saldo - valor;
                } else {
                	printf("Valor de depósito inválido.\n");
                }
                break;
            case 3:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        printf ("\n Pressione Enter para continuar");
        getchar (); // Funciona com scanf
        getchar (); // Aguarda o enter 
        
        system("clear");
        
    } while (opcao != 4);

    
    return 0; 
}
    