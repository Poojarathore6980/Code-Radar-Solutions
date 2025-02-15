#include <stdio.h>
int main(){
    double a,b,c;
    double Average=0;
    
    scanf("%lf ", &a);
    
    scanf("%lf ", &b);
    
    scanf("%lf", &c);
    Average=(a+b+c)/3;
    printf("Average: %.2lf", Average);
    return 0;
}