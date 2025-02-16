#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if(a==a ||a==e ||a==i||a==o|| a==u
      a==A || a==E || a==I || a==U){
        printf("Vowel \n");
    }
    else if(a>='a' && a<='z' ){
        printf("Consonant \n");
    }
    else{
        printf("Special Character \n");
    }
    return 0;
}