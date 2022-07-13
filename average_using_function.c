#include<stdio.h>
float averg(float a, float b, float c);
void main(){
    float num1,num2,num3;
    printf("Enter the first number : ");
    scanf("%f",&num1);
    printf("Enter the second number : ");
    scanf("%f",&num2);
    printf("Enter the third number : ");
    scanf("%f",&num3);
    averg(num1,num2,num3);
}
float averg(float a, float b, float c)
{
    float res=(a+b+c)/3;
    printf("Average is %2.f\n",res);
}