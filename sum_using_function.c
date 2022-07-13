#include<stdio.h>
int sum(int, int);

void main(){
    int a, b;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    sum(a,b);
    int c=a+b;
    printf("The sum of %d and %d is %d\n",a,b,c);
}

int sum(int a,int b){
    return a,b;
}