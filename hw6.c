#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
char name;
int i=0;
int main(){
    printf("\n\tEnter The Name Of  Birthday Boy/Girl :-");
    scanf("%s", &name);
    for (i = 0; i <= 200; i++)
    {
        printf("Happy Birthday To %s !\t", &name);
    }
    return 0;
}