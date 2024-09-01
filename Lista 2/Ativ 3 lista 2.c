#include <stdio.h>

int main() {
    int numeromacas;
    float preco, custoTotal;

    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &numeromacas);

    if (numeromacas < 12) {
        preco = 1.30;
    } else {
        preco = 1.00;
    }

    custoTotal = numeromacas * preco;

    printf("O custo total da compra é: R$%.2f\n", custoTotal);

    return 0;
}

