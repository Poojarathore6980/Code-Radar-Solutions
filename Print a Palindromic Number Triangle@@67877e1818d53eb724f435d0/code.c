#include <stdio.h>
int main(){
    int n;
    scanf("%d", n);
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d", j);
        }
        for(int k=1;k<=1;k--){
            printf("%d", j);
        }
        printf("\n");

        
    }
    return 0;
}