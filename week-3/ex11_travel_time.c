#include <stdio.h>

int main(){
    // Variáveis
    float distancia, velocidade, tempo_medio;
    int horas, minutos;

    // Entrada dos valores
    printf("Digite a distancia (Km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade (Km/h): ");
    scanf("%f", &velocidade);

    // Cálculo do tempo total em horas (float)
    tempo_medio=distancia/velocidade;

    // Separar horas inteiras
    horas = (int)tempo_medio;

    // Separar minutos
    minutos = (int)((tempo_medio-horas)*60);

    // Resultado
    printf("\nTempo medio de viagem: %d horas e %d minutos\n", horas, minutos);

    return 0;
}
