#include <stdio.h>
int main(){
    int a,b,c;
    int Average=0;
    printf("enter number a \n");
    scanf("%d", &a);
    printf("enter number b \n");
    scanf("%d", &b);
    printf("enter number c \n ");
    scanf("%d", &c);
    Average=(a+b+c)/3;
    printf("Average: %d", Average);
    return 0;
}