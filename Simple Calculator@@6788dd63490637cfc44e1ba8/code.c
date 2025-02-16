#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b , &c);
    if(c== '+'){
        int sum=a+b;
        printf("%d", sum);
    }
    else if (c=='-'){
        int sub=a-b;
        printf("%d", sub);
    }
    else if (c=='*'){
        int mult=a*b;
        printf("%d", mult);
    }
    else if (c=='/'){
        int div=a/b;
        printf("%.0f", div);
    }
    else {
        printf("error");
    }
    return 0;

     
}
    