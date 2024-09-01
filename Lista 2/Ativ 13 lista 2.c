#include <stdio.h>

int main() {
    
    int qAtual, qMaxima, qMinima;
    float qMedia;

    
    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &qAtual);
    
    printf("Digite a quantidade máxima em estoque: ");
    scanf("%d", &qMaxima);
    
    printf("Digite a quantidade mínima em estoque: ");
    scanf("%d", &qMinima);

    qMedia = (qMaxima + qMinima) / 2.0;

   
    printf("Quantidade média em estoque: %.2f\n", qMedia);

    if (qAtual >= qMedia) {
        printf("Não efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }
    
    return 0;
}

