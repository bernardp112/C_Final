#include <stdio.h>

int imprime(int m) {

    do {

        if (m <= 101){

            printf("f91(%d) = 91\n", m);
            
        }

        else{

            printf("f91(%d) = %d\n", m, m - 10);

        }

        scanf("%d", &m);

    } while (m != 0);
    
}

int main(){

    int n;
    scanf("%d", &n);

    imprime(n);

    return 0;

}