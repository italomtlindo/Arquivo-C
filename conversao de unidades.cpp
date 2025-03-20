#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	int opcao;
	float quilometros, mihas, celsius, fahrenheith, quilogramas, libras, metros, centimetros, resultado;
	
	do //inicio do while
	{
		printf("[1] - Converter quilômetros para milhas\n");
		printf("[2] - Converter Celsius para Fahrenheit \n");
		printf("[3] - Converter quilogramas para libras \n");
		printf("[4] - Converter metros para centímetros \n");
		printf("[5] - sair \n");
		printf("escolha uma opçao: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				printf("digite o numero de quilometros: ");
				scanf("%f", &quilometros);
				resultado = quilometros * 0.621371;
				printf("resultado em milhas: %.2f\n", resultado);
				break;
			
			case 2:
				printf("digite o numero de celsius: ");
				scanf("%f", &celsius);
				resultado = celsius * 1.8 + 32;
				printf("resultado em fahrenheit : %.2f\n", resultado);
				break;
			
			case 3:
				printf("digite o numero de quilogramas: ");
				scanf("%f", &quilogramas);
				resultado = quilogramas * 2.2046;
				printf("resultado em libras : %.2f\n", resultado);
				break;
				
			case 4:
				printf("digite o numero de metros: ");
				scanf("%f", &metros);
				resultado = metros * 100;
				printf("resultado em centimetros : %.2f\n", resultado);
				break;
			    
			
			case 0:
				printf("ate logo...\n");
				break;
			default :
				printf("opçao invalida! tente novamente\n");
		}
		
		printf("\npressione enter para continuar");
		getchar(); //funciona como o scanf
		getchar(); //aguardar o enter do usuario
		
			system("cls");
	}while("opcao != 0");
	
	return 0;
}
	