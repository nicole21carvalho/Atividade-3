#include <stdio.h>

int main() {
    
    float hTrabalhadas, sPorHora, sTotal;
    float hExtras, sHoraExtra;
    
    
    const int hPorSemana = 40;
    
    printf("Digite o número total de horas trabalhadas no mês: ");
    scanf("%f", &hTrabalhadas);
    
    printf("Digite o salário por hora: ");
    scanf("%f", &sPorHora);
    
    int hNormaisNoMes = hPorSemana * 4;
    
    if (hTrabalhadas > hNormaisNoMes) {
        hExtras = hTrabalhadas - hNormaisNoMes;
    } else {
        hExtras = 0;
    }
    
    sHoraExtra = sPorHora * 1.5; 
    sTotal = (hNormaisNoMes * sPorHora) + (hExtras * sHoraExtra);
    
    
    printf("O salário total do funcionário é: R$ %.2f\n", sTotal);
    
    return 0;
}

