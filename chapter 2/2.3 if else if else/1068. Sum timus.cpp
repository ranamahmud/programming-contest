#include <stdio.h>

int main(){
    // declare variables
    int n, sum;
    scanf("%d",&n);
    if(n > 0){
        sum = n*(n+1)/2;
    }else{
        sum = (( n*(n-1)/2)-1)*-1;
    }
    printf("%d\n",sum);
    return 0;
}