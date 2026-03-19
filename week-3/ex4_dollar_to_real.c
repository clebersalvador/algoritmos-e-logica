#include <stdio.h>

int main(){
	//Variáveis
  float dolares, cotacao, reais;
    
  //Entrada dos valores
	printf("Digite a quantidade de dolares no cofre (US$): ");
  scanf("%f", &dolares);

  printf("Digite a cotacao do dolar do dia (R$): "); 
  scanf("%f", &cotacao);

	//Cálculo da cotação
  reais = dolares * cotacao;
    
  //Resultado
  printf("\n\nValor em reais: R$ %.2f", reais);

  return 0;
}
