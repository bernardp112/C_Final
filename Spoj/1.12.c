#include <stdio.h>
#include <string.h>
/*Deu Ruim*/
int main(){

    int z, w, len, v = 0;
    char y[21];
    
    while(scanf("%s", y)!=EOF){

        len = strlen(y);
        for(int j = 0; j < len; j++){

            w = y[j];

            if(w > 96){

                v += w - 96;

            }   

            else{

                v += w - 38;

            }

        }

        for(int i = 2; i < v; i++){

            if(v % i != 0){

                z = 0;

            }

            else{

                z = 1;
                break;

            }

        }

        if(v == 1 || z == 0){

            printf("It is a prime word.\n");

        }

        else{

            printf("It is not a prime word.\n");

        }

    }

    return 0;

}