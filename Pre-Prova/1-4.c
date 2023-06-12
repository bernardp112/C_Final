#include <stdio.h>

int main(){

    int i, coluna, linha, valor;
    int matriz[3][3]; 

    for(linha = 0; linha < 3; linha++){

        for(coluna = 0; coluna < 3; coluna++){

            matriz[linha][coluna] = 2;

        }

    }

    for(i = 0; i < 100; i++){

        printf("Escolha a coluna: \n");
        scanf("%d", &coluna);
        printf("Escolha a linha: \n");
        scanf("%d", &linha);
        printf("Escolha o valor(1-X, 0-O): \n");
        scanf("%d", &valor);
        
        matriz[linha - 1][coluna - 1] = valor;

        for(linha = 0; linha < 3; linha++){

            for(coluna = 0; coluna < 3; coluna++){

                printf("%d", matriz[linha][coluna]);

            }
        
            printf("\n");

    }

    }

}