#include <stdio.h>
#include <math.h>

int main(){
	
	//Variáveis
	float lado, perimetro, area, diagonal;
	
	//Entrada do valor
	printf("Digite o lado do quadrado: ");
	scanf("%f", &lado);
	
	//Cálculos
	perimetro=lado*4;
	area=pow(lado, 2);
	diagonal=lado*sqrt(2);
	
	//Resultados
	printf("\nPerimetro do quadrado: %.2f", perimetro);
	printf("\nArea do quadrado: %.2f", area);
	printf("\nDiagonal do quadrado: %.2f", diagonal);
	
	return 0;
}
