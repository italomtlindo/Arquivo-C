#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct {
	
	char nome[50];
	char cpf[50];
	char telefone[50];
	char email[50];
}Reserva;

Reserva reservas[10];
int numReserva = 0;

void fazercheckin();
void solicitarservico();
void fazerpedido();

int main() {
	int opcao;
	printf("escolha uma opcao\n");
	printf("[1] - fazer checkin \n");
	printf("[2] - solicitar serviço de quarto \n");
	printf("[3] - fazer pedido \n");
	scanf("%d", &opcao);
		switch(opcao) {
	
        case 1:
        fazercheckin();
        break;
       
        case 2:
        solicitarservico();
        break;
   
        case 3:
        fazerpedido();
        break;
         default:
         printf("Opção inválida! \n");
}
	
	return 0;
}

void fazercheckin() {	
	
	printf("Informe seu nome \n");
	scanf(" %[^\n]", reservas[numReserva].nome);
	printf("informe seu cpf \n");
	scanf("%s", reservas[numReserva].cpf);
	printf("informe seu telefone \n");
	scanf("%s", reservas[numReserva].telefone);
	printf("informe seu email \n");
	scanf("%s", reservas[numReserva].email);
	numReserva ++;

}

void solicitarservico () {
int opcao, quarto;
char esquipe[20];

printf("selecione qual opção de serviço de quarto você deseja \n");
printf("[1] - camareira \n");
printf("[2] - lavanderia \n");
printf("[3] - equipamento de escritorio \n");
scanf("%d", &opcao);

switch(opcao){
	
	case 1:
		printf("informe o numero do seu quarto \n");
		scanf("%d", &quarto);
		printf("camareira marcada para o quarto %d \n", quarto);
		break;
		
	case 2:
		printf("informe o numero do seu quarto \n");
		scanf("%d", &quarto);
		printf("lavanderia marcada para o quaro %d \n", quarto);
		break;
		
	case 3:
		printf("informe o numero do seu quarto \n");
		scanf("%d", &quarto);
		printf("equipamento de escritorio marcado para o quarto %d \n", quarto);
		break;
		
	}

}

void fazerpedido () {
int opcao, quarto;
char pedido[50];

printf("selecione sua opcao \n");
printf("[1] - sucos \n");
printf("[2] - refrigerante \n");
printf("[3] - lanche \n");
printf("[4] - salgadinho \n");
printf("[5] - doce \n");
printf("[6] - pratos feitos \n");
printf("[7] - porçoes \n");
scanf("%d", &opcao);

printf("qual o numero do seu quarto \n");
scanf("%d", &quarto);

switch(opcao) {
	case 1:
		printf("qual suco? \n");
		break;
		
	case 2:
		printf("qual refrigerante? \n");
		break;
		
	case 3:
		printf("qual lanche? \n");
		break;
		
	case 4:
		printf("qual salgadinho? \n");
		break;
		
	case 5:
		printf("qual doce? \n");
		break;
		
	case 6:
		printf("qual prato feito? \n");
		break;
		
	case 7:
		printf("qual porção? \n");
		break;
		
	default:
		printf("essa opção nao existe \n");
		return;
		
	}
	
	scanf("%s", &pedido);
	printf("'%s'chegara no quarto %d em 10 minutos \n", pedido, quarto);
}
