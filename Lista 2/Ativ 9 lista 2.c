#include <stdio.h>

int main() {
    
    float hTrabalhadas, sPorHora, sTotal;
    float hExtras, sHoraExtra;
    
    
    const int hPorSemana = 40;
    
    printf("Digite o n�mero total de horas trabalhadas no m�s: ");
    scanf("%f", &hTrabalhadas);
    
    printf("Digite o sal�rio por hora: ");
    scanf("%f", &sPorHora);
    
    int hNormaisNoMes = hPorSemana * 4;
    
    if (hTrabalhadas > hNormaisNoMes) {
        hExtras = hTrabalhadas - hNormaisNoMes;
    } else {
        hExtras = 0;
    }
    
    sHoraExtra = sPorHora * 1.5; 
    sTotal = (hNormaisNoMes * sPorHora) + (hExtras * sHoraExtra);
    
    
    printf("O sal�rio total do funcion�rio �: R$ %.2f\n", sTotal);
    
    return 0;
}

