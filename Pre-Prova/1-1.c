#include <stdio.h>

int main(){

    int inicio, valor, total = 0;
    int inteiros[25];

    for(inicio = 0; inicio < 25; inicio++){

        scanf("%d", &inteiros[inicio]);

    }
    
    printf("Escolha um numero: ");
    scanf("%d", &valor);
    
    for(inicio = 0; inicio < 25; inicio++){

        if(valor == inteiros[inicio]){

            total++;

        } 

    }

    printf("O total de vezes que o numero %d aparece e %d", valor, total);

}