#include <stdio.h>

int main(){
    char ch;
    printf("Enter Character :");
    scanf("%c", &ch);
    if (ch=='a'|| ch=='A' ||  ch=='e' ||  ch=='E' || ch=='i' ||ch=='I' || ch=='o' ||ch=='O' || ch=='u' ||ch=='U')
    printf("It is vowel");
    else
    printf("It is constant");
    return 0;
}