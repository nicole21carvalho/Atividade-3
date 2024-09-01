#include <stdio.h>

int main() {
    
    char nome[100], sexo;
    float altura, pIdeal;

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a altura em metros : ");
    scanf("%f", &altura);

    printf("Digite o sexo (M masculino, F feminino): ");
    scanf(" %c", &sexo); 
    
    
    if (sexo == 'M' || sexo == 'm') {
        pIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido.\n");
        return 1; 
    }
  
    printf("Nome: %s", nome); 
    printf("Altura: %.2f metros\n", altura);
    printf("Sexo: %c\n", sexo);
    printf("Peso ideal: %.2f kg\n", pIdeal);
    
    return 0;
}

