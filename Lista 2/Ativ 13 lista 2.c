#include <stdio.h>

int main() {
    
    int qAtual, qMaxima, qMinima;
    float qMedia;

    
    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &qAtual);
    
    printf("Digite a quantidade m�xima em estoque: ");
    scanf("%d", &qMaxima);
    
    printf("Digite a quantidade m�nima em estoque: ");
    scanf("%d", &qMinima);

    qMedia = (qMaxima + qMinima) / 2.0;

   
    printf("Quantidade m�dia em estoque: %.2f\n", qMedia);

    if (qAtual >= qMedia) {
        printf("N�o efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }
    
    return 0;
}

