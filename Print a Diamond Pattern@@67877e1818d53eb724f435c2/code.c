#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int sp=1;sp<=n-i;sp++ ){
           printf(" "); 
        }
        for(int st=1;st<=2*i-1;st++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}