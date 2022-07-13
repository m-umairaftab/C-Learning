#include<stdio.h>
void main(){
    int num;
    printf("Enter any digit from 1 to 5 : ");
    scanf("%d",&num);
    switch (num)
    {
        case 1 :
        {
            printf("you entered one.\n");
            break;
        }
        case 2 :
        {
            printf("you entered two.\n");
            break;
        }
        case 3 :
        {
            printf("you entered three.\n");
            break;
        }
        case 4 :
        {
            printf("you entered four.\n");
            break;
        }
        case 5 :
        {
            printf("you entered five.\n");
            break;
        }
        default:
        {
            printf("you entered wrong digit.\n");
            break;
        }
    }
}