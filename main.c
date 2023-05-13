#include<stdio.h>

int main(void){

    int num = -1;
    int cont = 0;
    int sum = 0;

    while(num != 0){

       scanf("%d", &num);
       sum += num;
       cont++; 
       if (cont == 2){
            printf("La suma es: %d\n", sum);
           if(sum == 99){
                printf("Finish.");
                break;
            }
            sum = 0;
            cont = 0;
       }
       
    }    

    return 0;
}