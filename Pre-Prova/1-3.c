#include <stdio.h>

int main(){

    int i, j, total;
    int matriz[5][5];

    for(i = 0; i < 5; i++){

        for(j = 0; j < 5; j++){

            scanf("%d", &matriz[i][j]);

        }

    }
    
    for(i = 0; i < 5; i++){

        for(j = 0; j < 5; j++){

            if(i >= j){

                total += matriz[i][j];

            }

        }

    }

    printf("Soma total: %d", total);

}