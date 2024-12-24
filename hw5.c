#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float cube,num;

    printf("Enter the Number: ");
    scanf("%f", &num);

    cube = num * num * num;
    printf("The Cube is: %.2f \n", cube);
    printf("Thank You !!!\n");
    
    return 0;
}