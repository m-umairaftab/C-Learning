#include<stdio.h>
void main(){
    const int a=10;
    char s[a];
    printf("Enter any string : ");
    fgets(s,a,stdin);
    for(int i=sizeof(s); i<=sizeof(s);i--){
        printf("%c",s[i]);
    }    
    printf("\n");
}