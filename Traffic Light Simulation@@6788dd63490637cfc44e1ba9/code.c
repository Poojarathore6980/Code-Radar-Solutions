// Your code here...
#include <stdio.h>
int main(){
    char C;
    scanf("%c", &C);
    if('C'=='R'){
        printf("Stop");
    }
    else if('C'=='G'){
        printf("Go");
    }
    else if('C'== 'Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
    
}