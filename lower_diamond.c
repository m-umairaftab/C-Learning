#include<stdio.h>
void main(){
    int a;
    printf("how many star rows print : ");
    scanf("%d",&a);
    for (int i = a; i >= 1; i--)
    {
        for (int j = a; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}