#include <stdio.h>
#include <math.h>

int main()
{
    float work, force, displacement, angle;

    printf("Enter the force (in newtons): ");
    scanf("%f", &force);

    printf("Enter the displacement (in meters): ");
    scanf("%f", &displacement);

    printf("Enter the angle between force and displacement (in degrees): ");
    scanf("%f", &angle);

    angle = angle * M_PI / 180.0; // Convert angle from degrees to radians

    work = force * displacement * cos(angle);

    printf("The work is: %.2f joules\n", work);

    return 0;
}
