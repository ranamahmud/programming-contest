#include <stdio.h>

int main(){
    // declare coordinates
    int x, y;
    // get coordinates
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0){
        printf("First Quadrant\n"); // 5 5
    }else if(x < 0 && y > 0){
        printf("Second Quadrant\n"); // -5 5
    }else if(x < 0 && y < 0){
        printf("Third Quadrant\n"); // -5 -5
    }else if(x > 0 && y < 0){
        printf("Fourth Quadrant\n"); // 5 -5
    }
    return 0;
}