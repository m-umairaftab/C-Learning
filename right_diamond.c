#include<stdio.h>
void main(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int m=2; m>=1; m--){
        for(int n=1; n<=m; n++){
            printf("*");
        }
        printf("\n");
    }
}