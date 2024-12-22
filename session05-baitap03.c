#include<stdio.h>


int main(){
    int n;
    int sum = 0;
    printf("nhap so nguyen n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
         sum = sum + i;

    }
    printf("tong tat ca so tu 1 den %d la: %d\n", n,sum);



    return 0;

}