#include <stdio.h>

int main()
{
    float distance, time, speed;

    // Input distance and time
    printf("Enter the distance (in meters): ");
    scanf("%f", &distance);

    printf("Enter the time taken (in seconds): ");
    scanf("%f", &time);

    // Calculate speed
    speed = distance / time;
    distance = speed * time;
    time = distance / speed;

    // Display the result
    printf("The speed is: %.2f m/s\n", speed);

    return 0;
}
