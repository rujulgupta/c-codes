#include <stdio.h>

int main(){
    char ch;
    printf("Enter Character :");
    scanf("%c", &ch);
    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    printf("It is Alphabet");
    else
    printf("It is not Alphabet");
    return 0;
}