#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dst;
    printf("Enter the points on cartesian coordinates : \n");
    printf("x1 : ");
    scanf("%d", &x1);

    printf("x2 : ");
    scanf("%d", &x2);

    printf("y1 : ");
    scanf("%d", &y1);

    printf("y2 : ");
    scanf("%d", &y2);
    dst = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("The distance between these points is %.2f\n", dst);
}
