#include <stdio.h>
#include <stdlib.h>
int main()
{
    double x,y,a,b;
    scanf("%lf %lf %lf %lf",&x,&a,&y,&b);
    double Max = (y*b-x*a)/(b-a);
    printf("%.2lf",Max);
    return 0;
}