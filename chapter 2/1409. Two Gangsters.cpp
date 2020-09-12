#include <stdio.h>

int main(){
    int harry, larry, totalCan;
    scanf("%d %d",&harry,&larry);
    totalCan = harry + larry  - 1; // -1 as they both shot 1 can
    printf("%d %d\n", totalCan - harry, totalCan - larry);
    return 0;
}