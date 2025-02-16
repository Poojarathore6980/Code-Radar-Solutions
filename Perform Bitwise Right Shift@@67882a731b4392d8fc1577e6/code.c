#include <stdio.h>
int main(){
    int a,shift;
    scanf("%d %d", &a, &shift);
    int result=a>>shift;
    printf("%d", result);
    return 0;
    

}