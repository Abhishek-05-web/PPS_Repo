// Q Write a program to check an alphabet is vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main(){
    char Ch;
    printf("Enter an alphabet: ");
    scanf("%c",&Ch);
    char ch=tolower(Ch);
    switch (ch){
        case 'a':
            printf("%c is vowel",Ch);
            break;
        case 'e':
            printf("%c is vowel",Ch);
            break;
        case 'i':
            printf("%c is vowel",Ch);
            break;
        case 'o':
            printf("%c is vowel",Ch);
            break;
        case 'u':
            printf("%c is vowel",Ch);
            break;
        default:
            printf("%c is consonant",Ch);
            break;
    }
    return 0;
}