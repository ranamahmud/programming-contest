#include <stdio.h>
#include <math.h>
int main(){
    double radius, perimiter;
    scanf("%lf", &radius);// 12
    perimiter = 2 * acos(-1) * radius;
    printf("%lf", perimiter); // 75.398224
    return 0;
}