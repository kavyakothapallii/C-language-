#include<stdio.h>
int main(){
    char alphabet[26] ;
    char *ptr = &alphabet;
    for(char ch = 'A' ; ch <= 'Z' ; ch++ ){
        *ptr = ch ;
        ptr ++;
    }
ptr = alphabet;
    
     for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}
