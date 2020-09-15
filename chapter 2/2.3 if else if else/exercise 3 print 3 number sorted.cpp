#include <stdio.h>

int main(){
    // declare numbers
    int a, b, c;
    // take input values
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && b >= c){
        printf("%d %d %d\n", a, b, c);  // 6 3 1, -1,-3,-6
    }else if(a <= b && b <= c){
        printf("%d %d %d\n",c,b,a);
    }else if(b >= a && a >= c){
        printf("%d %d %d\n",b, a,c ); // 3 6 1 , -3 -1 -6
    }else if(b>= c && c >= a){
        printf("%d %d %d\n",b, c, a); // 1 6 3, -6 -1 -3
    }
    return 0;
    
}