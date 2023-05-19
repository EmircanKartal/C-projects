#include <stdio.h>
#include <math.h>
/*
Define a struct called a circle, whose members are centerx (decimal), center (decimal), and radius (decimal). Write a function called tegetMi, which checks whether these circles are tangent to each other according to the information of 2 circles sent to it, together with a main function where the circle information is entered from the keyboard and the result is printed on the screen (Global variable should not be used). If the function circle is not 1 to each other then 0 should be returned.

And the result must be printed "The circles are tangent" or "The circles are not tangent".
*/
struct Circle
{
    double centerx;
    double centery;
    double radius;
};

int isTangent(struct Circle c1, struct Circle c2)
{
    // Calculate the distance between the centers of the circles
    double distance = sqrt(pow((c2.centerx - c1.centerx), 2) + pow((c2.centery - c1.centery), 2));

    // Check if the circles are tangent (distance = sum of radii)
    if (distance == c1.radius + c2.radius)
        return 1; // Circles are tangent
    else
        return 0; // Circles are not tangent
}

int main()
{
    struct Circle circle1, circle2;

    // Input information for circle 1
    printf("Enter the information for Circle 1 (x,y,r):\n");
    printf("Center X-coordinate: ");
    scanf("%lf", &circle1.centerx);
    printf("Center Y-coordinate: ");
    scanf("%lf", &circle1.centery);
    printf("Radius: ");
    scanf("%lf", &circle1.radius);

    // Input information for circle 2
    printf("\nEnter the information for Circle 2 (x,y,r):\n");
    printf("Center X-coordinate: ");
    scanf("%lf", &circle2.centerx);
    printf("Center Y-coordinate: ");
    scanf("%lf", &circle2.centery);
    printf("Radius: ");
    scanf("%lf", &circle2.radius);

    printf("-------------------------");

    // Check if the circles are tangent
    if (isTangent(circle1, circle2))
        printf("\nThe circles are tangent.\n");
    else
        printf("\nThe circles are not tangent.\n");

    return 0;
}
