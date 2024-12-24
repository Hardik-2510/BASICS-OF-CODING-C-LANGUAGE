#include<stdio.h>
#include<stdlib.h>

int PrimaryAmount;
float intrest;
float  duration;
float NewAmount;

void main(){
    printf("\t\n\n*************** My Intrest.com ***************");
    printf("\t\n Principle Amount :-");
    scanf("%d", &PrimaryAmount);
    printf("\t\n Intrest (In Percentage) :-");
    scanf("%f", &intrest);
    printf("\t\n Duration(In Year) :-");
    scanf("%f", &duration);
    printf("\t\n Intrest Amount :- %f \n ", ((intrest / 100) * PrimaryAmount * duration));
    printf("\t\n Payable Amount (Including Intrest):- %f \n ", ((intrest / 100) * PrimaryAmount * duration) + PrimaryAmount);
    printf("\t\t\t\n\n Thank You ! Visit Again \n\n\n");

    return ;
}