#include <stdio.h>






float sub(float A, float B){
    float res;
    res = A - B;
    return res;
}


float soma(float A, float B){
	float res;
	res = A + B;
	return res;
}


float multi(float A, float B){
	float res;
	res = A * B;
	return res;
}


float divisao(float A, float B){
	float res;
	res = A / B;
	return res;
}


float porcentagem(float A, float B){
	float res;
	res = A * B /100;
	return res;
}


float media (float A, float B){
	float res;
	res = (A + B) /2;
	return res;
}


int main(){
	int opcao;
	float v1, v2;
	scanf("%f", &v1);
    scanf("%f", &v2);
	float res=0;
	
	printf("1 - soma\n");
	printf("2 - subtrair\n");
	printf("3 - multi\n");
	printf("4 - divisao\n");
	printf("5 - porcentagem\n");
	printf("6 - media\n");
	scanf("%d",&opcao);

    switch(opcao){
    
    case 1:
    		res = soma(v1,v2);
    		printf("Res = %f", res);
    		break;
    		
    case 2:
    	res = sub(v1,v2);
    	printf("res = %f", res);
    	break;
    	
    case 3:
    	res = multi(v1,v2);
    	printf("res = %f", res);
    	break;
    	
    case 4:
    	res = divisao(v1,v2);
    	printf("res = %f", res);
    	break;
    	
    case 5:
    	res = porcentagem(v1,v2);
    	printf("res = %f", res);
    	break;
    	
    case 6:
    	res = media (v1,v2);
    	printf("res = %f", res);
    	break;
    	
	}
	//int res2 = sub(v1,v2);
	//printf("res = %d", res2);
	//int res = soma(v1,v2);
	//printf("Res = %d", res);
    
    return 0; 
}

