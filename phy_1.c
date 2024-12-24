#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float force, mass, acceleration;

    printf("Enter the mass (in kilograms): ");
    scanf("%f", &mass);

    printf("Enter the acceleration (in meters per second squared): ");
    scanf("%f", &acceleration);

    force = mass * acceleration;

    printf("The force is: %.2f newtons\n", force);

    return 0;
}