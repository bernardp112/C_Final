#include <stdio.h>
#include <string.h>
#include <math.h>

int resto(int n, int m){

    int i;
    float z;

    for (i = 1; i <= sqrt(m); i++){

        z = m % i;

        if (z == 0){

            n++;  

        }  

    }

    return n;

}

int main(){
    
    char y[21];
    int x, i, w, t;
    
    while (scanf("%s", y)!=EOF){

    	x = 0;
        for (i = 0; y[i] != '\0'; i++){

            if (y[i] == 'a'){

                x += 1; 

            }
            else if (y[i] == 'b'){

                x += 2; 

            }

            else if (y[i] == 'c'){

                x += 3; 

            } 

            else if (y[i] == 'd'){

                x += 4; 

            }

            else if (y[i] == 'e'){

                x += 5;

            }

            else if (y[i] == 'f'){

                x += 6;

            }

            else if (y[i] == 'g'){

                x += 7; 

            }

            else if (y[i] == 'h'){

                x += 8; 

            }
              
            else if (y[i] == 'i'){
                      
                x += 9; 
              
            }
            
            else if (y[i] == 'j'){
                
                x += 10; 
            
            }
              
            else if (y[i] == 'k'){
                
                x += 11; 
            
            }
            
            else if (y[i] == 'l'){
                
                x += 12; 
            
            }
            
            else if (y[i] == 'm'){
                
                x += 13; 
            
            }
            
            else if (y[i] == 'n'){
                
                x += 14; 
            
            }
            
            else if (y[i] == 'o'){
                
                x += 15; 
            
            }
            
            else if (y[i] == 'p'){
                
                x += 16; 
            
            }
            
            else if (y[i] == 'q'){
                
                x += 17; 
            
            }
            
            else if (y[i] == 'r'){
                
                x += 18; 
            
            }
            
            else if (y[i] == 's'){
                
                x += 19; 
            
            }
            
            else if (y[i] == 't'){
                
                x += 20; 
            
            }
            
            else if (y[i] == 'u'){
                
                x += 21;
            
            }
            
            else if (y[i] == 'v'){
                
                x += 22; 
            
            }
            
            else if (y[i] == 'w'){
                
                x += 23; 
            
            }
            
            else if (y[i] == 'x'){
                
                x += 24; 
            
            }
            
            else if (y[i] == 'y'){
                
                x += 25; 
            
            }
            
            else if (y[i] == 'z'){
                
                x += 26; 
            
            }   
            
            else if (y[i] == 'A'){
                
                x += 27; 
            
            }
            
            else if (y[i] == 'B'){
                
                x += 28; 
            
            }
            
            else if (y[i] == 'C'){
                
                x += 29; 
            
            }
            
            else if (y[i] == 'D'){
                
                x += 30; 
            
            }
            
            else if (y[i] == 'E'){
                
                x += 31; 
            
            }
            
            else if (y[i] == 'F'){
                
                x += 32; 
            
            }
            
            else if (y[i] == 'G'){
                
                x += 33; 
            
            }
            
            else if (y[i] == 'H'){
                
                x += 34; 
            
            }
            
            else if (y[i] == 'I'){
                
                x += 35; 
            
            }
            
            else if (y[i] == 'J'){
                      
                x += 36; 
            
            }
            
            else if (y[i] == 'K'){
                
                x += 37; 
            
            }
            
            else if (y[i] == 'L'){
                
                x += 38; 
            
            }
            
            else if (y[i] == 'M'){
                
                x += 39; 
            
            }
            
            else if (y[i] == 'N'){
                
                x += 40; 
            
            }
            
            else if (y[i] == 'O'){
                
                x += 41; 
            
            }
            
            else if (y[i] == 'P'){
                
                x += 42; 
            
            }
              
            else if (y[i] == 'Q'){
                
                x += 43; 
            
            }
            
            else if (y[i] == 'R'){
                
                x += 44; 

            }
              
            else if (y[i] == 'S'){
                      
                x += 45; 
              
            }

            else if (y[i] == 'T'){

                x += 46;

            }

            else if (y[i] == 'U'){

                x += 47;

            }

            else if (y[i] == 'V'){

                x += 48; 

            }

            else if (y[i] == 'W'){

                x += 49; 

            }

            else if (y[i] == 'X'){

                x += 50;

            }

            else if (y[i] == 'Y'){

                x += 51; 

            }

            else if (y[i] == 'Z'){

                x += 52; 

            } 

        }

        w = 0;

        t = resto(w, x);

        if (t >= 2){

            printf("It is not a prime word.\n");  

        }
        else if (x == 0 || x < 0){

            printf("It is not a prime word.\n");
        
        }

        else {

            printf("It is a prime word.\n");

        }

    }
    
    return 0;

}