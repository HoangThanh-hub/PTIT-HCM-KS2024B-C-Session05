#include<stdio.h>


int main(){
    int n;
    printf("nhap so nguyen duong tu 1 - 10 : ");
    scanf("%d",&n);

    for(int i = 1; i <= 10; i++){
        int tich = n * i;
        printf("%d * %d = %d\n", n, i, tich);
    }



    return 0;
}