#include <stdio.h>

int main() {
    // Variáveis da parede
    float altura_parede, comprimento_parede;
    
    // Variáveis do tijolo com argamassa (em metros)
    float altura_tijolo;
    float comprimento_tijolo;
    
    // Variáveis de cálculo
    int num_tijolos_horizontais, num_tijolos_verticais, qtd_tijolos;
    
    // Entrada de dados
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura_parede);
    
    printf("Digite o comprimento da parede em metros: ");
    scanf("%f", &comprimento_parede);
    
    // Cálculos
    num_tijolos_horizontais = (int)(comprimento_parede / 0.325); // quantos tijolos cabem na horizontal (30 cm + 2,5 cm da argamassa)

    num_tijolos_verticais = (int)(altura_parede / 0.225); // quantos tijolos cabem na vertical (20 cm + 2,5 cm da argamassa)
    
    qtd_tijolos = num_tijolos_horizontais * num_tijolos_verticais; // total de tijolos
    
    //qtd_tijolos=(altura_parede*comprimento_parede)/(0.325*0.225);
    
    // Resultado
    printf("\nQuantidade de tijolos necessaria: %d\n", qtd_tijolos);
    
    return 0;
}
