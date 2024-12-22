#include<stdio.h>


int main(){
    for(int n = 1; n <=9; n++){
        for(int i = 1; i <= 10; i++){
        int tich = n * i;
        printf("%d * %d = %d\n", n, i, tich);
    }
    printf("\n\n");
    }

    



    return 0;
}