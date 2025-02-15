#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter a \n" );
    printf("enter b \n");
    printf("enter c \n");
    scanf("%d" , &a);
    scanf("%d" , b);
    scanf("%d", &c);
    print("Average: %d" , a+b+c/3);
    return 0;
}