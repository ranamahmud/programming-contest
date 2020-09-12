#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c,p, area; // 24 30 18
    scanf("%lf %lf %lf",&a,&b,&c);
    p = (a + b + c) / 2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%lf", area); // 216

    return 0;
}