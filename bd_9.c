#include <stdio.h>
#include<math.h>

void main()
{
    float distance, time, speed;

    printf("Enter the distance travelled(km) : ");
    scanf("%f", &distance);

    printf("Enter the time taken(hr) : ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed of the car = %.2f km/h", speed);

}
