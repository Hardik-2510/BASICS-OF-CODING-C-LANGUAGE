#include<stdio.h>
// How to find perimeter of rectangle
int main(){
    float a, b;
    printf("The First Side Of Rectangle :- ");
    scanf("%f", &a);

    printf("The Second Side Of Rectangle :- ");
    scanf("%f", &b);

    printf("The Perimeter of Rectangle is :- %f \n", 2 * (a + b));
    return 0;
}