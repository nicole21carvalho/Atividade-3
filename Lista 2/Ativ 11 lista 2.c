#include <stdio.h>

int main() {
    float sFixo, vVendas, comissao, sTotal;

    printf("Digite o sal�rio fixo do vendedor: R$");
    scanf("%f", &sFixo);

    printf("Digite o valor das vendas efetuadas: R$");
    scanf("%f", &vVendas);

    if (vVendas <= 1500.00) {
        comissao = vVendas * 0.03; 
    } else {
        comissao = (1500.00 * 0.03) + ((vVendas - 1500.00) * 0.05); 
    }

    sTotal = sFixo + comissao;

    printf("O sal�rio total do vendedor �: R$%.2f\n", sTotal);

    return 0;
}

