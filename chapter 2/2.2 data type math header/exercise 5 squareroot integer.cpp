#include <stdio.h>
#include <math.h>

int main(){
    int number, closeSquareRoot;

    scanf("%d", &number); // 10
    
    closeSquareRoot = sqrt(number);
    
    printf("%d\n", closeSquareRoot); // 3
    
    return 0;
}