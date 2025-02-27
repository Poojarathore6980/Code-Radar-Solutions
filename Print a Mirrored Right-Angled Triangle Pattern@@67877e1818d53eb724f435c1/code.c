#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a); 
    for(int i=1; i<= a ; i++){
        for ( int sp=1; sp<= a-i ; sp++){

            for( int j =1; j<=i;j++){
                printf("* ");
            }
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}