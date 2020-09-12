#include <stdio.h>
#include <math.h>

double getAngle(double a,double b,double c){
    double angle = acos((b*b + c*c - a*a)/ (2*b*c));
    angle = (180/acos(-1)) * angle;
    return angle;
}

int main(){
    double a, b, c, angleA, angleB, angleC;;
    scanf("%lf %lf %lf",&a,&b,&c);
    angleA = getAngle(b, c, a);
    angleB = getAngle(a, c, b);
    angleC = getAngle(a, b, c);
    printf("%lf %lf %lf", angleA, angleB, angleC);
    return 0;
}