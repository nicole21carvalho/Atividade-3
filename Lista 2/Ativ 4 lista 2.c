#include <stdio.h>

int main() {
   
    float not1, not2, media;
    
    printf("Digite a nota da 1ª avaliação: ");
    scanf("%f", &not1);
    
    printf("Digite a nota da 2ª avaliação: ");
    scanf("%f", &not2);
    
    media = (not1 + not2) / 2.0;
    
    printf("A média das notas é: %.2f\n", media);
    
    if (media >= 7.0) {
    	
        printf("O aluno foi aprovado.\n");
    } else {
    	
        printf("O aluno não foi aprovado.\n");
    }
    
    return 0;
}

