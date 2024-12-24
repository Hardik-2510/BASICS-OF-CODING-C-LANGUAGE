#include <stdio.h>

int main()
{
    float force, springConstant, displacement;

    printf("Enter the spring constant (in newtons per meter): ");
    scanf("%f", &springConstant);

    printf("Enter the displacement from the equilibrium position (in meters): ");
    scanf("%f", &displacement);

    force = springConstant * displacement;

    printf("The force is: %.2f newtons\n", force);

    return 0;
}
