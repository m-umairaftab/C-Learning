#include<stdio.h>
void main(){
    char s[5];
    printf("Enter any string : ");
    fgets(s,5,stdin);
    printf("%c",s[5]);
    printf("%c",s[4]);
    printf("%c",s[3]);
    printf("%c",s[2]);
    printf("%c\n",s[1]);
}