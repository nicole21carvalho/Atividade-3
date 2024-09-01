#include <stdio.h>

int main() {
 
    int v1, v2;
    
  
    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    
    if (v1 < v2) {
        printf("Valores em ordem crescente: %d, %d\n", v1, v2);
    } else {
        printf("Valores em ordem crescente: %d, %d\n", v2, v1);
    }
    
    return 0;
}

