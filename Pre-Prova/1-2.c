#include <stdio.h>

int main(){

    char A[100], B[100], C[100];
    int i = 0, k = 0;

    printf("Primeira palavra: ");
    scanf("%s", &A);

    printf("segunda palavra: ");
    scanf("%s", &B);
    
    while(i < 100){

        if(k%2==0){

            C[k] = A[i];
            i++;
            
        }

        else{

            k++;

        }

        

    }

    C[k] = '\0';

    printf("%s", C);

}