#include<stdio.h>
void main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<4-i;j++){
            printf(" ");
        }

        for(int k=0; k<5; k++){
            if(i==0 || i==4){
                printf("*");
            } else {
                if(k==0 || k==4){
                    printf("*");
                } else{
                    printf(" ");

                }
            }
        }
        printf("\n");
    }
}