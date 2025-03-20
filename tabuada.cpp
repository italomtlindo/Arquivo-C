

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "");
    int opcao, nm, tb;

    do {
        printf("1 - Digitar um numero para ver a tabuada\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &nm);
                printf("\nTabuada do %d:\n", nm);
                while (tb <= 10) {
                    printf("%d x %d = %d\n", nm, tb, nm * tb);
                    tb++;
                }
                break;
            case 2:
                printf("Obrigado por usar a tabuada interativa!\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

        printf("\nPressione Enter para continuar...");
        getchar(); 
        getchar();
        
        system("cls");
    
    } while (opcao != 2);

    return 0;
}
	