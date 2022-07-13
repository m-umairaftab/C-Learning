#include<stdio.h>
void main(){
    int a;
    printf("how many star rows print : ");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        for(int j=0;j<a-i;j++){
            printf(" ");
        }
        for(int k=0;k<a;k++){
            printf("*");
        }
        printf("\n");
    }
    
}