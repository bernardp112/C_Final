#include <stdio.h>

int main(){

    int N = 1, x;

    do{

        scanf("%d", &N);

        if(N<=101){

            printf("F91(%d) = 91\n", N);

        }

        else{

            x = N - 10;
            printf("F91(%d) = %d\n", N, x);

        }

    }while(N!=0);

    return 0;

}