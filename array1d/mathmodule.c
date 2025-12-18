#include <stdio.h>
#include <math.h>
int main()
{
    float angle,result,radian;
    printf("enter angle ");
    scanf("%f",&angle);
    radian=(float)(3.14/180)*angle;
    result=sin(radian);
    printf("the value of sin%f is %f",angle,result);
    return 0;
}
