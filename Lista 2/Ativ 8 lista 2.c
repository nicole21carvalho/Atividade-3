#include <stdio.h>

int main() {
  
    int hInicio, hFim, duracao;
    
    printf("Digite a hora de início do jogo: ");
    scanf("%d", &hInicio);
    
    printf("Digite a hora de fim do jogo: ");
    scanf("%d", &hFim);
   
   
    if (hFim >= hInicio) {
       
        duracao = hFim - hInicio;
    } else {
     
        duracao = (24 - hInicio) + hFim;
    }
    
  
    printf("A duração do jogo é: %d horas\n", duracao);
    
    return 0;
}

