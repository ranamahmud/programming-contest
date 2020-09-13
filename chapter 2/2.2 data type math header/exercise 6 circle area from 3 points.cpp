#include <stdio.h>
#include <math.h>

int main(){
    // declare variables
    double x1, x2, x3, y1, y2, y3, area;
    printf("Enter 3 circle tips coordinates\n x1 y1, x2, y2, x3, y3\n");
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    // area formula |(x1*(y2-y3) + x2*(y3-y1)+x3*(y1-y2))/2|
    area = abs((x1*(y2-y3) + x2*(y3-y1)+x3*(y1-y2))/2); // 15 15 22 31 50 25
    printf("%lf", area); // 245.0
    return 0;
}