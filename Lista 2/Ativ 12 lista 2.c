#include <stdio.h>

int main() {
   
    int nConta;
    float saldo, debito, credito, sAtual;
    
    printf("Digite o n�mero da conta do cliente: ");
    scanf("%d", &nConta);
    
    printf("Digite o saldo atual: ");
    scanf("%f", &saldo);
    
    printf("Digite o valor do d�bito: ");
    scanf("%f", &debito);
    
    printf("Digite o valor do cr�dito: ");
    scanf("%f", &credito);
    
    sAtual = saldo - debito + credito;
    
    printf("N�mero da Conta: %d\n", nConta);
    printf("Saldo Atual: %.2f\n", sAtual);
    
    if (sAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }
    
    return 0;
}

