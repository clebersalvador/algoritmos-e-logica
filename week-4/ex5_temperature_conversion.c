#include<stdio.h>

main(){
	float c,f;
	
	printf("Temperatura em F: ");
	scanf("%f", &f);
	
	c=5.0/9*(f-32);
	
	printf("\nTemperatura em C: %.2f\n", c);
	
	if(c<=20){
		printf("\nLevar roupa de frio\n");
	}else{
		printf("\nNAO levar roupa de frio\n");
	}
	
}
