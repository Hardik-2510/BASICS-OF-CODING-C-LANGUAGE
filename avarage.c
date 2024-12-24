#include<stdio.h>

int main(){
    int x , y , z ;
    float avg;
    printf("Enter Three Number To Find Average :\n");
    printf("\nEnter Number - 1 :-  ");
    scanf("%d",&x);
    printf("Enter Number - 2 :-  ");
    scanf("%d",&y);
    printf("Enter Number - 3 :-  ");
    scanf("%d",&z);
    avg = (x + y + z)/3;
    printf("Average of %d , %d , And %d is %f", x , y , z , avg);
}