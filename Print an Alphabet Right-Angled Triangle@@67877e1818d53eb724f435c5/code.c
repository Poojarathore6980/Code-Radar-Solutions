#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        char ch='A';
        for(int j=0; j<i; j++){
            printf("%c ", ch+j);
        }
        printf("\n");
    }
    return 0;
}