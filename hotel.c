#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL ,"");
	int menu, serv, card, quarto1, quarto2, quarto3, quarto4, quarto5, quarto6, quarto7 ;
	char nome [20],svdq[20], cpf[20], telefone[20], email[50], senha[20], quarto[20], lavanderia[20], equipesc[20], sucos[20], refrigerante[20], lanche[20], salgadinho[20], doce[20], pratosfei[20], porcoes[20];
	printf("bem vindo ao hotel do robson, o con: \n");
	printf("o que você deseja?: \n");
	printf("\n [1] - fazer chrckin");
	printf("\n [2] - solicitar serviço de quarto");
	printf("\n [3] - fazer checkin\n");
	scanf("%d", &menu);
	
	
	
	switch(menu){
	case 1:

	printf("informe seu nome: \n");
	scanf("%s",nome);
	printf("informe seu CPF: \n");
	scanf("%s",cpf);
	printf("informe seu telefone: \n");
	scanf("%s",telefone);
	printf("informe seu email: \n");
	scanf("%s",email);
	break;
	
	
	case 2:
	printf("Selecione a opção de serviço \n");
    printf("[1] - Camareira \n");
    printf("[2] - Lavanderia \n");
	printf("[3] - Equipamentos de escritório \n");
    scanf("%d", &serv);
    switch (serv) {
    	case 1:
    	printf("Informe o numero do seu quarto \n");
    	scanf ("%d", &quarto);
    	printf("Esta marcado!");
    	break;
    	case 2:
    	printf("Informe o numero do seu quarto \n");
    	scanf("%d", &lavanderia);
    	printf("Esta marcado!");
    	break;
    	case 3:
    	printf("Informe qual equipamento você necessita \n");
    	scanf("%s", equipesc);
    	printf("Esta marcado!");
    	break;
    	default:
    	return 0;
    }
		
	case 3:
            printf("Selecione seu pedido \n");
            printf("[1] - Sucos \n");
            printf("[2] - Refrigerante \n");
            printf("[3] - Lanche \n");
            printf("[4] - Salgadinho \n");
            printf("[5] - Doce \n");
            printf("[6] - pratos feitos \n");
            printf("[7] - pratos feitos \n");
            scanf("%d", &card);
            switch (card) {	
            
        case 1:
    	printf("Qual numero do seu quarto? \n");
        scanf ("%d", &quarto1);
        printf("Qual salgadinho? \n");
        scanf ("%s", sucos);
        printf("Chegará no seu quarto em 10 minutos!");
        break;
		case 2:
        printf("Qual numero do seu quarto? \n");
        scanf ("%d", &quarto2);
        printf("Qual refrigerante? \n");
        scanf("%s", refrigerante);
        printf("Chegará no seu quarto em 10 minutos!");
        break;
		case 3:
        printf("Qual numero do seu quarto? \n");
        scanf ("%d", &quarto3);
        printf("Qual lanche? \n");
        scanf("%s", lanche);
        printf("Chegará no seu quarto em 10 minutos!");
        break;
		case 4:
        printf("Qual numero do seu quarto? \n");
        scanf ("%d", &quarto4);
        printf("Qual suco? \n");
        scanf ("%s", salgadinho);
        printf("Chegará no seu quarto em 10 minutos!");
        break;
        case 5:
        printf("Qual numero do seu quarto? \n");
        scanf ("%d", &quarto5);
        printf("Qual doce? \n");
        scanf("%s", doce);
        printf("Chegará no seu quarto em 10 minutos!");
        break;
        case 6:
        printf("Qual numero do seu quarto? \n");
        scanf ("%d", &quarto6);
        printf("Qual doce? \n");
        scanf("%s", pratosfei);
        printf("Chegará no seu quarto em 10 minutos!");
        break;
        case 7:
        printf("Qual numero do seu quarto? \n");
        scanf ("%d", &quarto7);
        printf("Qual doce? \n");
        scanf("%s", porcoes);
        printf("Chegará no seu quarto em 10 minutos!");
        break;
        default:        
		return 0;
				
	}
        default:
        return 1;
    }
   
return 0;
}
		
		
		
		
		
		
		
