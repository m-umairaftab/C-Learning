#include<stdio.h>
void main(){
    int a, b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number.Second number should be greater than first number : ");
    scanf("%d",&b);
    if (a>=b)
    {
        printf("Invalid input.Second number should be greater than first number.\n");
    }
    else
    {
        for( ; a<=b; a++)
        {
            printf("%d\n",a);
        }
    }
}