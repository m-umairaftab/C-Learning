#include<stdio.h>
void main(){
    float obt, per;
    printf("Total marks of matric is 1100\n");
    printf("Enter the obtained marks of student in matric : ");
    scanf("%f",&obt);
    per=obt/1100*100;
    if(per>=80){
        printf("Grade of student is A++\n");
    }
    else if(per>=70){
        printf("Grade of student is A\n");
    }
    else if(per>=60){
        printf("Grade of student is B\n");
    }
    else if(per>=50){
        printf("Grade of student is C\n");
    }
    else if(per>=40){
        printf("Grade of student is D\n");
    }
    else if(per>=33){
        printf("Grade of student is E\n");
    }
    else{
        printf("This student is fail\n");
    }
}