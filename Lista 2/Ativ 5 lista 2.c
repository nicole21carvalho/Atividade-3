#include <stdio.h>

int main() {
    
    int anAtual, anNascimento, idade;
    
    printf("Digite o ano atual: ");
    scanf("%d", &anAtual);
    
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anNascimento);
    
    idade = anAtual - anNascimento;
    
    if (idade >= 16) {
    	
        printf("A pessoa pode votar este ano.\n");
    } else {
    	
        printf("A pessoa não pode votar este ano.\n");
    }
    
    return 0;
}

