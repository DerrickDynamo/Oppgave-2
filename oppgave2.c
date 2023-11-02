#include <stdio.h>

int main(){
    int i =0;

    do{
        printf("*\n");

        i++;

        do{
            printf("*");

            i++;
            
        } while (i<7);

    } while (i<6);


    printf("\n");

    return 0;
}