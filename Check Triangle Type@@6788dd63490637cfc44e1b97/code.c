#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b || b==c || a==c){
        printf("Ispscelese");
    }
    else{
        printf("scalene")
    }
    return 0;
}